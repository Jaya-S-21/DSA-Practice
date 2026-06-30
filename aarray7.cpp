//Max Subarray Sum (Brute Force Method)
#include <iostream>
using namespace std;
void printsubarray(int arr[],int n) {
    int maxsum =INT_MIN;
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            int sumarr =0;
            for (int k =i; k<=j; k++) {
                sumarr = sumarr + arr[k];
            }
            cout<<sumarr<<",";
            maxsum = max(maxsum,sumarr);
        }
        cout<<endl;
    }
    cout<<"Maximum Subarray Sum: "<<maxsum<<endl;
}
int main() {
    int arr[] ={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    printsubarray(arr, n);
    return 0;
}