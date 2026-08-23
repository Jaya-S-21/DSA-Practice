//Lucky Numbers in a Matrix
#include <iostream>
#include <vector>
using namespace std;
vector<int> luckyNumbers(vector<vector<int>>& matrix) {
    int r = matrix.size();
    int c = matrix[0].size();
    vector<int> ans;
    vector<int> minno(r);
    vector<int> maxno(c);
    for (int i=0; i<r; i++) {
        minno[i] = 100000;
        for(int j=0; j<c; j++) {
            minno[i] = min(minno[i], matrix[i][j]);
        }
    }
    for (int i=0; i<c; i++) {
        maxno[i] = 1;
        for(int j=0; j<r; j++) {
            maxno[i] = max(maxno[i], matrix[j][i]);
        }
    } 
    for (int i =0; i<r; i++) {
        for (int j =0; j< c; j++) {
            if (matrix[i][j] == minno[i] && matrix[i][j] == maxno[j]) {
                ans.push_back(matrix[i][j]);
            }
        }
    }
    return ans;
}
int main() {
    vector<vector<int>> matrix = {{1,10,4,2},{9,3,8,7},{15,16,17,12}};
    vector<int> ans = luckyNumbers(matrix);
    for (int i=0; i<ans.size(); i++) {
        cout <<ans[i] <<endl;
    }
    return 0;
}