//Squares of sorted array -> 2 pointer
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> sortedSquares(vector<int>& nums) {
    vector<int> ans(nums.size());
    int start = 0, end = nums.size() -1;
    int k = end;
    while (start <= end) {
        int startsq = nums[start] * nums[start];
        int endsq = nums[end] * nums[end];
        if (startsq > endsq) {
            ans[k] = startsq;
            start++;
        } else {
            ans[k] = endsq;
            end--;
        }
        k--;
    }        
    return ans;
}
int main() {
    vector<int> nums= {-4,-1,0,2,6,10};
    vector <int> ans = sortedSquares(nums);
    for (int i=0; i<ans.size(); i++) {
        cout<< ans[i]<<" ";
    }
}