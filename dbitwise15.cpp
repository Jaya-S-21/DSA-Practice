//X-OR beauty of array
#include <iostream>
#include <vector>
using namespace std;
int xorbeautyofarray(vector<int> &nums){
    int ans =0;
    for (int i =0; i< nums.size(); i++) {
        for (int j =0; j <nums.size(); j++) {
            for (int k =0; k <nums.size(); k++) {
                ans = ans ^ ((nums[i] | nums[j]) & nums[k]);
            }
        }
    }
    return ans;
} 

// int xorarray(vector<int> & nums) {
//     int ans =0;
//     for (int i=0; i<nums.size(); i++) {
//         ans = ans^nums[i];
//     }
//     return ans;
// }


int main() {
    vector <int > nums ={1,4};
    int k = xorbeautyofarray(nums);
    // int l = xorarray(nums);
    cout << k <<endl;
    // cout <<l;
    return 0;
}