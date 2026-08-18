//Matrix Diagonal Sum
#include <iostream>
#include <vector>
using namespace std;
int diagonalSum(vector<vector<int>>& mat) {
    int row = mat.size();
    int col = mat[0].size();
    int add =0;
    for (int i =0 ; i <row; i++) {
        for (int j =0; j <col; j++) {
            if ((i == j) || (i+j == row-1)) {
                add += mat[i][j];
            }
        }
    }
    return add;
}
int main () {
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    cout << diagonalSum(mat) <<endl;
    return 0;
}