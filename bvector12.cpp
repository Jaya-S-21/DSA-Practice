#include <iostream>
#include <vector>
using namespace std;
int findgcd(vector<int>& nums) {
    int high = nums[0];
    int low = nums[0];
    int n = nums.size();
    for (int i=1; i<n; i++) {
        high = max(high,nums[i]);
        low = min(low,nums[i]);
    }
    int ans=1;
    for (int i=1; i<= low; i++) {
        if (high%i==0 && low%i==0) {
            ans = i;
        }
    }
    return ans;
}
int main() {
    vector<int> nums = {2,5,6,9,10};
    int ans = findgcd(nums);
    cout<<ans<<endl;
    return 0;
}