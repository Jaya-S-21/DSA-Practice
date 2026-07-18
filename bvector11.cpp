//3 sum
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<vector<int>> threesum(vector<int> nums) {
    vector<vector<int>> ans;
    int n = nums.size();
    sort (nums.begin(), nums.end());
    for (int i =1; i<n; i++) {
        if (i>0 &&nums[i]== nums[i-1]){
            continue;
        }
        int j = i+1;
        int k= n-1;
        while(j<k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == 0) {
                vector<int> a = {nums[i],nums[j],nums[k]};
                ans.push_back(a);
                j++;
                k--;
                while (j<k && nums[j] == nums[j-1]) {
                    j++;
                }
                while (j<k && nums[k] == nums[k+1]) {
                    k--;
                }
            } else if (sum <0) {
                j++;
            } else {
                k--;
            }
        }
    }
    return ans;
}
int main () {
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = threesum(nums);
    for (int i=0; i<ans.size(); i++) {
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}