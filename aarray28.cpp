//Find the Duplicate Number
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for (int i=1; i<nums.size();i++){
        if(nums[i] == nums[i-1]){
            return nums[i];
        }
    }
    return -1;
}
int main() {
    vector<int> nums = {1,4,2,4,3};
    int k = findDuplicate(nums);
    cout<<k<<endl;
}