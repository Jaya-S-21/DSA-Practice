//Single Number
#include <iostream>
#include <vector>
using namespace std;
int singlenumber(vector<int> & nums){
    int ans =0;
    for(int i=0; i<nums.size(); i++){
        ans =ans ^nums[i];
    }
    return ans;
}
int main() {
    vector<int> nums = {2,2,1};
    int k = singlenumber(nums);
    cout << k << endl;
    return 0;
}