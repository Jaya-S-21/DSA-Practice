//Sum of Squares of Special Elements
#include <iostream>
#include <vector>
using namespace std;
int sumOfSquares(vector<int>& nums) {
    int sum = 0;
    int n = nums.size();
    for (int i =1; i<= n; i++) {
        if (n % i == 0) {
            sum += nums[i-1] * nums[i-1];
        }
    }
    return sum;
}
int main() {
    vector<int> nums = {1,2,3,4};
    cout<<sumOfSquares(nums)<<endl;
    vector<int> nums2 = {2,7,1,19,18,3};
    cout<<sumOfSquares(nums2);
    return 0;
}