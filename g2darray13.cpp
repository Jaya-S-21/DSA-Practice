//  Rotate Image
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i=0; i < n; i++) {       //transpose
        for (int j =i+1; j <n; j++) {
            swap (matrix[i][j], matrix[j][i]);
        }
    }
    for (int i =0; i< n; i++) {       //reverse
        reverse(matrix[i].begin(), matrix[i].end());
    }
    // for (int i=0; i <n ; i++) {
    //     for (int j =i; j <n; j++) {
    //         int temp = matrix[i][j];
    //         matrix[i][j] = matrix[j][i];
    //         matrix[j][i] = temp;
    //     }
    // }
    // for (int i =0; i<n; i++) {
    //     for (int j =0; j<n/2; j++) {
    //         int temp = matrix[i][j];
    //         matrix[i][j] = matrix[i][n-1-j];
    //         matrix[i][n-1-j] = temp;
    //     }
    // }
    for (int i =0; i <n; i++) {
        for (int j =0; j <n; j++) {
            cout <<matrix[i][j]<< " ";
        }
        cout<<endl;
    }
}
int main() {
    vector<vector<int>> matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    rotate(matrix);
    return 0;
}