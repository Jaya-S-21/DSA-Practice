//Two Sum but brute force
#include <iostream>
using namespace std;
int main() {
    int arr[] = {2,7,11,19};
    int n = sizeof(arr)/sizeof(int);
    int t = 9;
    for (int i =0; i<n; i++) {
        for (int j = i+1; j <n; j++) {
            if (arr[i]+arr[j] == t){
                cout <<"["<<i<<","<<j<<"]";
                break;
            }
        }
    }
    return 0;
}