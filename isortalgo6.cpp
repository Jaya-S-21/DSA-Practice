//Bubble, Selection, Insertion & Counting Sort in Descending Order
#include <iostream>
using namespace std;
void print (int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout <<arr[i]<<" ";
    }
    cout <<endl;
}
void bubbledescend(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    print(arr, n);
}
void selectiondescend(int arr[], int n) {
    for (int i=0; i<n-1; i++) {
        int minidx =i;
        for (int j=i+1; j <n; j++) {
            if (minidx > arr[j]) {
                minidx = j;
            }
        }
        swap(arr[minidx], arr[i]);
    }
    print(arr,n);
}
void insertiondescend(int arr[], int n) {
    for (int i=1; i<n; i++) {
        int curr = arr[i];
        int prev = i-1;
        while (prev>=0 && arr[prev]> curr) {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
    print(arr,n);
}
void countdescend(int arr[], int n) {
    int freq[100000] = {0};
    int minval = INT_MAX, maxval = INT_MIN;
    for (int i=0; i<n; i++){
        freq[arr[i]]++;
        minval = min(minval, arr[i]);
        maxval = max(maxval, arr[i]);
    }
    for (int i=minval, j=0; i<=maxval; i++) {
        while(freq[i] > 0) {
            arr[j++] = i;
            freq[i]--;
        }
    }
    print(arr,n);
}
int main() {
    int arr[] = {3,6,2,1,8,7,4,5,3,1};
    bubbledescend(arr,10);
    selectiondescend(arr,10);
    insertiondescend(arr,10);
    countdescend(arr,10);
    return 0;
}