//Search in Rotated Sorted Array O(log n)
#include <iostream>
using namespace std;
int search(int arr[], int s, int e, int key) {
    if (s > e) return -1;

    int mid = s+ (e - s)/2;

    if(arr[mid] == key) {
        return mid;
    } else if (arr[s] <= arr[mid]) { //Left is Sorted
        if (arr[s] <= key && key <= arr[mid]) {
            return search(arr, s, mid-1, key); //left
        } else {
            return search(arr, mid+1, e, key); //right
        }
    } else { //Right is Sorted
        if (arr[mid] <= key && key <= arr[e]) {
            return search(arr, mid+1, e, key); //right
        } else {
            return search(arr, s, mid-1, key); //left
        }
    }
}
int main () {
    int arr[7] = {4,5,6,7,0,1,2};
    int n=7;
    cout<<search(arr,0,n-1,0);
    return 0;
}