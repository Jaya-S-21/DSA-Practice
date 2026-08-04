//Find Missing Elements
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> findMissingElements(vector<int>& nums) {
    int n= nums.size();
    vector<int> ans;
    sort(nums.begin(), nums.end());
    int a = nums[0] , i=0;
    while (a <= nums[n-1]) {
        if (nums[i] == a) {
           i++;
        }else{
           ans.push_back(a);
        }
        a++;
    }
    return ans;
}
int main() {
    vector<int > nums = {1,4,2,5,7,9};
    vector <int> ans = findMissingElements(nums);
    for (int i=0; i< ans.size() ;i++) {
        cout <<ans[i] <<" ";
    }
    return 0;
}