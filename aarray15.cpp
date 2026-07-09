//maximum product subarray
#include <iostream>
using namespace std;
void productsubarray(int arr[], int n) {
    int maxprod = INT_MIN;
    int prefix = 1, suffix =1;
    for (int i =0; i<n; i++) {
        prefix *= arr[i];
        suffix *= arr[n-i-1];
        maxprod = max(maxprod, max(prefix,suffix));
        if (prefix < 0) {
            prefix = 1;
        }
        if (suffix < 0){
            suffix = 1;
        }
    }
    cout <<"Maximum Subarray Product: "<<maxprod<<endl;
}
int main() {
    int arr[] = {-2,0,-1};
    int n = sizeof(arr)/sizeof(int);
    productsubarray(arr,n);
    return 0;
}