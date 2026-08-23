//Toeplitz Matrix
#include <iostream>
#include <vector>
using namespace std;
bool isToeplitzMatrix(vector<vector<int>>& matrix) {
    for (int i=0 ; i< matrix.size()- 1; i++) {
        for (int j=0 ; j <matrix[0].size()- 1; j++) {
            if (matrix[i][j] != matrix[i+1][j+1]) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    vector<vector<int>> matrix = {{1,2,3,4},{5,1,2,3},{9,5,1,2}};
    cout<<isToeplitzMatrix(matrix)<<endl;
    vector<vector<int>> matrix2 = {{1,2},{2,2}};
    cout<<isToeplitzMatrix(matrix2);
}