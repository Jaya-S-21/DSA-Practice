//Binary Search using Recursion
#include <iostream>
using namespace std;
int binarysearch(int arr[], int s, int e, int k) {
    if (s > e) return -1;
    int mid = (s + e) /2;
    if (k == arr[mid]) return mid;
    else if (arr[mid] > k) {
        return binarysearch(arr, s, mid-1, k);
    }else {
        return binarysearch(arr, mid+1, e, k);
    }
}
int main() {
    int arr[] = {1,2,3,4,5,6,7};
    cout << binarysearch(arr, 0, 6, 5);
    return 0;
}