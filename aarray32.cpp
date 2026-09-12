//Merge Sorted Array
#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m-1;
    int j = n-1;
    int k = m +n -1 ;
    while (j >= 0) {
        if (i >= 0 && nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }
    return nums1;
}
int main() {
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    vector<int> ans = merge(nums1,3,nums2,3);
    for (int a=0; a < ans.size(); a++) {
        cout <<ans[a]<<" ";
    }
    return 0;
}