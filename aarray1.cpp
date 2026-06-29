#include <iostream>
using namespace std;
//linear search in array//
int linearsearch(int arr[],int n,int k){
    for (int i=0; i<n; i++) {
        if (k== arr[i]) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[]={5,9,3,4,7,2,4,6};
    int n= sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter Number you want to find: ";
    cin>> key;
    cout<<"Index: "<<linearsearch(arr,n,key)<<endl;
    return 0;
}