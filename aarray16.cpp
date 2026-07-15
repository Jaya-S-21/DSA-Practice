//Pair Sum (brute force)
#include <iostream>
//#include <vector>
using namespace std;
void pairsum(int arr[], int n){
    for (int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++){
            if (arr[i]+arr[j] == 9) {
                cout<<"["<<arr[i]<<","<<arr[j]<<"]"<<endl;
                break;
            }
        }
    }
}
int main() {
    int arr[] = {2,7,11,15};
    int n =sizeof(arr) /sizeof(int);
    pairsum(arr,n);
    return 0;
}