//Remove DUplicate from Sorted Array
#include <iostream>
#include <vector>
using namespace std;
int removeduplicates(vector<int>& nums) {
    int i=0;
    for (int j =1; j<nums.size(); j++) {
        if(nums[j] != nums [j-1]) {
            i++;
            nums[i] == nums[j];
        }
    }
    return i+1;
}
int main() {
    vector<int> nums = {1,1,2,2,3,4};
    int k = removeduplicates(nums);
    cout << k <<endl;
    return 0;
}