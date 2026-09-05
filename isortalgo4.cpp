//Counting Sort O(n+range)
#include <iostream>
using namespace std;
void print (int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i]<< " ";
    }
    cout<<endl;
}
void countingSort(int arr[], int n) {
    int freq[100000] = {0};
    int minval = INT_MAX, maxval = INT_MIN;
    for (int i=0; i < n; i++) {
        minval = min(minval, arr[i]);
        maxval = max(maxval, arr[i]);
    }
    for (int i=0; i <n ; i++) {
        freq[arr[i]]++;
    }
    for (int i = minval, j=0; i<= maxval; i++) {
        while (freq[i] > 0) {
            arr[j++] = i;
            freq[i]--;
        }
    }
    print(arr, n);
}
int main() {
    int arr[] = {1,4,1,3,2,4,3,7};
    countingSort(arr, 8);
    return 0;
}