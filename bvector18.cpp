//Replace elements with Greatest Element on Right Side
#include <iostream>
#include <vector>
using namespace std;
vector<int> replaceElements(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n);
    ans[n-1] = -1;
    for (int i =n-2; i >=0 ; i--) {
        ans[i] = max(arr[i+1], ans[i+1]);
    }
    return ans;
}
int main() {
    vector<int> nums= {17,18,5,4,6,1};
    vector<int> ans = replaceElements(nums);
    for (int i=0; i< ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}