//Smallest Index with Digit Sum equal to Index
#include <iostream>
#include <vector>
using namespace std;
int smallestIndex(vector<int>& nums) {
    for(int i=0; i<nums.size(); i++){
        int sum = 0, a  = nums[i];
        while (a > 0) {
            sum +=  a % 10;
            a /= 10;
        }
        if (sum == i) return i;
    }
    return -1;
}
int main() {
    vector<int> nums = {1,3,2};
    cout<<smallestIndex(nums)<<endl;
    return 0;
}