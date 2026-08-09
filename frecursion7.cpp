//First Occurence
#include <iostream>
#include <vector> 
using namespace std;
int firstOccurence(vector<int>& nums, int i, int target) {
    if (nums[i] == target) {
        return i;
    }
    if (i == nums.size()) {
        return -1;
    }
    return firstOccurence(nums,i+1,target);
}
using namespace std;
int main() {
    vector<int> nums= {1,2,3,3,3,4};
    cout<<firstOccurence(nums, 0, 3) <<endl;
    return 0;
}