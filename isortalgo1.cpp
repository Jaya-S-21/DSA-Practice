//Bubble Sort
#include <iostream>
using namespace std;
void print(int arr[], int n) {
    for (int i=0; i< n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubblesort(int arr[], int n) {
    int isSwap = false;
    for (int i=0; i <n-1; i++) {
        for (int j=0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
    }
    if (!isSwap) {
        return; // array is already sorted
    }
    print(arr,n);
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    bubblesort(arr,10); //no output
    int arr2[] = {5,4,1,3,2};
    bubblesort(arr2,5); //{1,2,3,4,5}
    return 0;
}