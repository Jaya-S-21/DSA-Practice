//Spiral Matrix II
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> ans(n,vector<int> (n));
    int srow =0, scol =0;
    int erow =n-1, ecol =n-1;
    int value =1;
    while((srow <= erow) && (scol <= ecol)) {
        for (int j =scol; j <= ecol; j++) {
            ans[srow][j] = value++;
        }
        for (int i = srow+1; i <= erow; i++) {
            ans[i][ecol] = value++;
        }
        for (int j = ecol -1; j >= scol; j--) {
            ans[erow][j] = value++;
        }
        for (int i = erow -1; i >= srow +1; i--) {
            ans[i][scol] = value++;
        }
        srow++; 
        scol++;
        ecol--;
        erow--;
    }
    return ans;
}
int main() {
    int n = 3;
    vector<vector<int>> ans = generateMatrix(n);
    for (int i=0; i <ans.size(); i++) {
        for (int j =0; j <ans[0].size(); j++) {
            cout<< ans[i][j] <<" ";
        }
    }
    return 0;
}