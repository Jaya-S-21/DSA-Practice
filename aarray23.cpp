//Missing Number
#include <iostream>
#include <vector>
using namespace std;
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int currsum =0 ;
    int expecsum = (n*(n+1))/2;
    for (int i=0; i<n ;i++) {
        currsum = currsum + nums[i];
    }
    int ans = expecsum - currsum;
    return ans;
}
int main() {
    vector<int> nums = {3,0,1};
    int k = missingNumber(nums);
    cout << k<<endl;
    return 0;
}