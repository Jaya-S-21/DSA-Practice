//Richest Customer Wealth
#include <iostream>
#include <vector>
using namespace std;
int maximumWealth(vector<vector<int>>& accounts) {
    int maxwealth = INT_MIN;
    for (int i=0; i< accounts.size(); i++) {
        int sum =0;
        for (int j=0; j< accounts[i].size(); j++) {
            sum += accounts[i][j];
        }
        maxwealth = max(maxwealth, sum);
    }
    return maxwealth;
}
int main() {
    vector<vector<int>> accounts = {{1,5},{7,3},{3,5}};
    cout<<"Max Wealth: "<<maximumWealth(accounts) <<endl;
    return 0; 
}