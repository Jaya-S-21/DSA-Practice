//Merge sort to an Array of Strings
#include <iostream>
#include <vector>
using namespace std;
void merge(string arr[], int s, int e, int mid) {
    vector<string> ans;
    int i =s;
    int j = mid+1;
    while (i <= mid && j <= e) {
        if (arr[i] <= arr[j]) {
            ans.push_back(arr[i++]);
        } else {
            ans.push_back(arr[j++]);
        }
    }
    while (i <= mid) {
        ans.push_back(arr[i++]);
    }
    while (j <= e) {
        ans.push_back(arr[j++]);
    }
    for (int m=s, n=0; m<=e; m++){
        arr[m] = ans[n++];
    }
}
void mergesort(string arr[], int s, int e) {
    if (s >= e) return;
    int mid = s +(e-s)/2;
    mergesort(arr, s, mid); //left
    mergesort(arr,mid+1,e); //right
    merge(arr, s, e, mid);
}
int main() {
    string arr[4] = {"sun","earth","mars","mercury"};
    int n =4;
    mergesort(arr,0,n-1);
    for (int i=0; i<n; i++) {
        cout <<arr[i]<<" ";
    }
    return 0;
}