//Distribute elements into two arrays I
#include <iostream>
#include <vector>
using namespace std;
vector<int> resultArray(vector<int>& nums) {
    vector<int> arr1 = {nums[0]};
    vector<int> arr2 = {nums[1]};
    for (int i = 2; i <nums.size(); i++) {
        if (arr1.back() > arr2.back()) {
            arr1.push_back(nums[i]);
        } else {
            arr2.push_back(nums[i]);
        }
    }
    arr1.insert(arr1.end(), arr2.begin(), arr2.end());
    return arr1;
}
int main() {
    vector<int> nums = {2,1,3};
    vector<int> ans = resultArray(nums);
    for (int i=0; i < ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}