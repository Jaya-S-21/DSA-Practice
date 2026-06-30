//Subarray Sum (Optimized Method)
#include <iostream>
using namespace std;
void printsubarray(int arr[],int n) {
    int maxsum =INT_MIN;
    for (int i=0; i<n; i++) {
        int sumarr =0;
        for (int j=i; j<n; j++) {
                sumarr = sumarr + arr[j];
            maxsum = max(maxsum,sumarr);
        }
    }
    cout<<"Maximum Subarray Sum: "<<maxsum<<endl;
}
int main() {
    int arr[] ={1,-2,3,-4,5};
    int n = sizeof(arr)/sizeof(int);
    printsubarray(arr, n);
    return 0;
}