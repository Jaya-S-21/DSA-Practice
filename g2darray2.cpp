//Transpose Matrix
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int col = matrix[0].size(); 
    vector<vector<int>> ans(col, vector<int>(rows,0));
    for (int i =0; i< col; i++) {
        for (int j =0; j < rows; j++) {
            ans[i][j] = matrix[j][i];
        } 
    }
    return ans;
}
int main() {
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    vector<vector<int>> ans = transpose(matrix);
    for (int i =0; i< ans.size(); i++) {
        for (int j =0; j <ans[0].size(); j++) {
            cout <<ans[i][j] <<" ";
        }
        cout <<endl;
    }
    return 0;
}