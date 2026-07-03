//Buy and Sell Stocks (brute force)
#include <iostream>
using namespace std;
void buysell(int arr[], int n){
    int maxprofit = INT_MIN;
    for (int i=0; i<n; i++) {
        int profit = 0;
        for (int j= i+1; j<n; j++){
            profit = arr[j] - arr[i];
            maxprofit = max(maxprofit,profit);
        }
    }
    cout<<"Max Profit: "<<maxprofit<<endl;
}
int main() {
    int arr[] ={7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(int);
    buysell(arr,n);
    return 0;
}