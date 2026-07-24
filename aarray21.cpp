//Running sum of 1D array
#include <iostream>
#include <vector>
using namespace std;
vector<int> runningSum(vector<int>& nums) {
    int n = nums.size();
    vector <int> runningsum(n);
    runningsum[0] = nums[0];
    for (int i=1; i<n; i++) {
        runningsum[i] = runningsum[i-1] + nums[i];
    }
    return runningsum;
}
int main() {
    vector<int> nums= {1,2,3,4};
    vector<int> runsum = runningSum(nums);
    for (int i=0; i<runsum.size(); i++) {
        cout <<runsum[i] <<" ";
    }
}