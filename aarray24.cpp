//Maximum Product of three number
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maximumProduct(vector<int>& nums) {
    int prod1 =1, prod2=1;
    int n = nums.size();
    sort (nums.begin(), nums.end());
    prod1 = nums[n-1] * nums[n-2] * nums[n-3];
    prod2 = nums[0] * nums[1] * nums[n-1];
    return max(prod1, prod2);
}
int main() {
    vector<int> nums = {1,2,3};
    int k = maximumProduct(nums);
    cout << k <<endl;
    return 0;
}