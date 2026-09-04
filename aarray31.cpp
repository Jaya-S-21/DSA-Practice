//Smallest Stable Index I
#include <iostream>
#include <vector>
using namespace std;
int firstStableIndex(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> maxno(n);
    vector<int> minno(n);
    maxno[0] = nums[0];
    for (int i = 1; i<n; i++) {
        maxno[i] = max(maxno[i-1], nums[i]);
    }
    minno[n-1] = nums[n-1];
    for (int i= n-2; i >=0; i--) {
        minno[i] = min(minno[i+1], nums[i]);
    }
    for (int i=0 ; i< n; i++) {
        if ((maxno[i] - minno[i]) <= k) {
            return i;
        }
    }
    return -1;
}
int main() {
    vector<int> nums= {5,0,1,4};
    cout << firstStableIndex(nums, 3)<<endl;
    return 0;
}