//Binary Search (but array sorted hona chahiye phele se hi)
#include <iostream>
using namespace std;
int main() {
    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout <<"Enter Number you want to Search: ";
    cin>>key;
    int start=0, end= n-1, mid , ind =-1;
    while (start <=end) {
        mid = (start+end)/2;
        if (arr[mid]== key) {
            ind = mid;
            break;
        }
        else if (arr[mid]<key) {
            start = mid+1;
        }
        else if (arr[mid]> key) {
            end = mid- 1;
        }
    }
    if (ind == -1) {
        cout <<"Element not found!!!" <<endl;
    } else {
        cout<<"Index: "<<ind<<endl;
    }
    return 0;
}


