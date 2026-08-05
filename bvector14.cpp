//Kids with the Greatest number of Candies
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int maxcandies = *max_element(candies.begin(), candies.end());
    vector<bool> ans;
    for (int i=0; i< candies.size(); i++) {
        int a = candies[i] + extraCandies;
        if (a >= maxcandies) {
            ans.push_back(true);
        } else {
            ans.push_back(false);
        }
    }
    return ans;
}

int main() {
    vector<int> candies= {2,3,5,1,3};
    int extraCandies = 3;
    vector<bool> ans = kidsWithCandies(candies, extraCandies);
    for (int i=0; i< ans.size(); i++) {
        cout<<ans[i]<<endl;
    }
    return 0;
}