//Remove Element
#include <iostream>
#include <vector>
using namespace std;
int removeelement(vector<int>& nums, int val) {
    int n = nums.size();
    int index=0;
    for (int i =0; i<n; i++) {
        if (nums[i] != val) {
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}
int main() {
    vector <int> nums = {3,2,2,3};
    int k = removeelement(nums, 3);
    cout << k << endl;
    return 0;
}