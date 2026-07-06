//Trapping Rainwater (array)
#include <iostream>
using namespace std;
void rainwater(int height[], int n) {
    int leftmax[n], rightmax[n];
    leftmax[0] = height[0];
    rightmax[n-1] = height[n-1];
    for (int i=1; i<n; i++){
        leftmax[i] = max(leftmax[i-1], height[i-1]);
    }
    for (int i=n-2; i>-1; i--){
        rightmax[i] = max(rightmax[i+1], height[i+1]);
    }
    int totalwater = 0;
    for (int i =0; i<n; i++) {
        int currwater = min(leftmax[i],rightmax[i]) - height[i];
        if (currwater > 0) {
            totalwater = totalwater + currwater;
        }
    }
    cout<<"Total Trapped Water: "<<totalwater;
}
int main() {
    int height[] = {4,2,0,6,3,2,5};
    int n = sizeof(height)/sizeof(int);
    rainwater(height,n);
}