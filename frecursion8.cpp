//Last Occurence
#include <iostream>
#include <vector>
using namespace std;
int lastOccurence(vector<int>& nums, int i, int target) {
    if (i == nums.size()) {
        return -1;
    }
    int lastindex = lastOccurence(nums,i+1,target);
    if (lastindex == -1 && nums[i] == target) {
        return i;
    }
    return lastindex;
}
int main() {
    vector<int> nums= {1,2,4};
    cout << lastOccurence(nums, 0, 3) <<endl;
    return 0;
}
