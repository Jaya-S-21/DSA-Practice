//Missing Number
#include <iostream>
#include <vector>
using namespace std;
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int ans = 0;
    for (int i =0; i<= n; i++) {
        ans = ans ^ i;
    }
    for (int i =0; i< n ; i++) {
        ans = ans ^ nums[i];
    }
    return ans;
}
int main() {
    vector<int> nums = {3,0,1};
    int k = missingNumber(nums);
    cout << k<<endl;
    return 0;
}