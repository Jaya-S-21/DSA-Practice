//Product of Array except Self
//ans = leftproduct * rightproduct -> brute force
#include <iostream>
#include <vector>
using namespace std;
vector<int> productExceptself(vector<int>& nums) {
    int n = nums.size();
    vector<int> answer(n);
    vector<int> rightprod(n);
    rightprod[n-1] = 1;
    answer[0] = 1;
    for (int i=1; i<n; i++) {
        answer[i] = answer[i-1] * nums[i-1];
    }
    for (int i=n-2; i>=0; i--) {
        rightprod[i] = rightprod[i+1] * nums[i+1];
    }
    for (int i=0; i<n; i++) {
        answer[i] = answer[i] * rightprod[i];
        nums[i] = answer[i];
    }
    return nums;
}
int main() {
    vector<int> nums = {1,2,3,4};
    vector<int> ans = productExceptself(nums);
    for (int i=0; i<ans.size() ; i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}