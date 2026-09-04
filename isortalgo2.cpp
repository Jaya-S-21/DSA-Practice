//Selection Sort O(n^2)
#include <iostream>
using namespace std;
void print(int arr[], int n){
    for (int i=0; i<n; i++) {
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}
void selectionsort(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        int minidx = i;
        //loop to find minimum (normally min no nikalne vala code hai)
        for (int j=i+1; j <n; j++) {
            if (arr[j] < arr[minidx]) {
                minidx = j;
            }
        }
        swap(arr[minidx], arr[i]);
    }
    print(arr,n);
}
int main() {
    int arr[] = {5,4,1,3,2};
    selectionsort(arr,5);
    return 0;
}
