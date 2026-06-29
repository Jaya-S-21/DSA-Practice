//Reversing an array without extra space//
#include <iostream>
using namespace std;
int main() {
    int arr[]={10,20,30,40,50};
    int n= sizeof(arr)/sizeof(int);
    int start=0, end= n-1;
    while (start <end) {
        int temp = arr[start] ;
        arr[start] = arr[end];
        arr[end] =temp;
        start++;
        end--; 
    }
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}

/*
for (int i=0; i<n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }*/
