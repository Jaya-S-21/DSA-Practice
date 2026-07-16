//Container with Most Water
#include <iostream>
#include <vector>
using namespace std;
int mostwater(const vector<int>& nums) {
    int start=0, end = nums.size()-1;
    int currarea, maxarea = 0;
    while (start <end) {
        currarea = min(nums[start], nums[end]) * (end - start);
        maxarea = max(maxarea,currarea);
        if (nums[start] < nums[end]) {
            start ++;
        } else {
            end--;
        }
    }
    return maxarea;
}
int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int ans = mostwater(height);
    cout<<ans<<endl;
    return 0;
}