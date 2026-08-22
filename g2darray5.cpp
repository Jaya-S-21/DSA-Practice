//Flipping an Image
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    int r = image.size();
    int c = image[0].size();
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c/2; j++) {
            int temp = image[i][j];
            image[i][j] = image[i][c-j-1];
            image[i][c-j-1] = temp;
            image[i][j] = 1 - image[i][j];
            image[i][c-j-1] = 1 - image[i][c-j-1];
        }
        if(c % 2 != 0) {
            image[i][c/2] = 1 - image[i][c/2];
        }
    }
    return image;
}
int main() {
    vector<vector<int>> image= {{1,1,0},{1,0,1},{0,0,0}};
    vector<vector<int>> ans = flipAndInvertImage(image);
    for (int i=0;i <ans.size(); i++){
        for (int j=0; j<ans[0].size(); j++){
            cout<< ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}