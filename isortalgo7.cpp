//Merge Sort
#include <iostream>
#include <vector>
using namespace std;
void merge(int arr[], int s, int e, int mid) {
    vector<int> ans;
    int i = s;
    int j = mid+1;
    while (i <= mid && j <= e) {
        if(arr[i] <= arr[j]) {
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
    for (int m=s, n=0; m<= e; m++) {
        arr[m] = ans[n++];
    }
}
void mergeSort(int arr[], int s, int e) {
    if (s >= e) return;

    int mid =s+(e-s)/2;
    mergeSort(arr,s,mid); //left
    mergeSort(arr,mid+1,e); //right

    merge(arr, s, e, mid); //merge
}
void print(int arr[], int n){
    for (int i=0; i <n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int arr[6] = {6,3,7,5,2,4};
    int n=6;
    mergeSort(arr,0,n-1);
    print(arr,n);
    return 0;
}