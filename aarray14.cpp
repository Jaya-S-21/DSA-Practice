//If element appeared twice return true else false
#include <iostream>
#include <algorithm>
using namespace std;
bool repeated(int arr[], int n){
    sort(arr, arr+n);
    for (int i=1; i<n; i++) {
        if (arr[i-1]==arr[i]){
            return true;
        }
    }
    return false;
}
int main() {
    int arr[] = {1,2,3,4,2,1,3,2};
    int n = sizeof(arr)/sizeof(int);
    cout<<repeated(arr,n);
    return 0;
}