//3 Sum (brute force)
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int nums[] = {-1,0,1,2,-1,-4};
    int n = sizeof(nums)/ sizeof(int);
    sort(nums,nums+n);
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++){
            for (int k=j+1; k<n; k++) {
                if (i != j && i != k && j != k) {
                    if (nums[i] + nums[j] + nums[k] == 0){
                        cout<<"["<<nums[i]<<","<<nums[j]<<","<<nums[k]<<"]"<<endl;
                    }
                }
            }
        }
    }
    return 0;
}