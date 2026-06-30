//Printing Subarrays
#include <iostream>
using namespace std;
void printsubarray(int arr[],int n, int count) {
    count =0;
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            for (int k =i; k<=j; k++) {
                cout<<arr[k];
            }
            cout<<",";
            count++;
        }
        cout<<endl;
    }
    cout<<"Total Subarrays: "<<count<<endl;
}
int main() {
    int arr[] ={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int count;
    printsubarray(arr, n, count);
    return 0;
}