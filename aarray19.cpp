//Move Zeroes
#include <iostream>
#include <vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int index=0;
    for (int i=0; i<n; i++){
        if (nums[i] != 0) {
            nums[index] = nums[i];
            index++;
        }
    }
    while (index <n) {
        nums[index] = 0;
        index++;
    }
    cout <<index;
}
int main() {
    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);
    return 0;
}