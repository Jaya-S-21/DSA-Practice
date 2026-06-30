//Kadane's Algorithm
#include <iostream>
using namespace std;
void printsubarray(int arr[],int n) {
    int maxsum =INT_MIN;
    int sumarr =0;
    for (int i=0; i<n; i++) {
        sumarr = sumarr + arr[i];
        maxsum = max(maxsum,sumarr);
        if (sumarr <0) {
            sumarr = 0;
        }
    }
    cout<<"Maximum Subarray Sum: "<<maxsum<<endl;
}
int main() {
    int arr[] ={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    printsubarray(arr, n);
    return 0;
}