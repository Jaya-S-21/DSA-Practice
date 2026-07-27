//Maximum Product of 2 Element in a array -> brute force
#include <iostream>
#include <vector>
using namespace std;
int maxProduct(vector<int>& nums) {
        int n =nums.size();
        int maxprod = INT_MIN;
        for (int i=0; i<n; i++) {
            for (int j=i;j<n; j++) {
                if (i != j) {
                    int prod = (nums[i]-1) * (nums[j]-1);
                    maxprod = max(maxprod, prod);
                }
            }
        }
        return maxprod;
    }
int main() {
    vector<int> nums= {3,4,5,2};
    int k = maxProduct(nums);
    cout <<k <<endl;
    return 0;
}