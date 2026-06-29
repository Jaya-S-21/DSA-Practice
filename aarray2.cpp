//Reversing an array with extra space//
#include <iostream>
using namespace std;
int main() {
    int arr[]= {10,20,30,40,50};
    int n= sizeof(arr)/sizeof(int);
    int revarr[n];
    for(int i=0; i<n; i++) {
        int j=n-i-1;
        revarr[j] = arr[i];
    }
    for (int i=0; i<n; i++) {
        arr[i] = revarr[i];
    }
    for (int i=0; i<n; i++) {
        cout <<arr[i]<<", ";
    }
    return 0;
}

