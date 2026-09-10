//Search Insert Position
#include <iostream>
#include <vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int st =0, en = nums.size()-1;
    while (st <= en) {
        int mid = st + (en-st)/2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid]  > target) {
            en = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return st;
}
int main() {
    vector<int> nums = {1,3,4,5,6};
    cout<<searchInsert(nums,5)<<endl;
    vector<int> nums2 = {1,3,5,6};
    cout<<searchInsert(nums2,2) <<endl;
    return 0;
}