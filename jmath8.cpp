//Rectangle Overlap
#include <iostream>
#include <vector>
using namespace std;
bool isRectangleOverlap(vector<int>& r1, vector<int>& r2) {
    return (r1[2] > r2[0] && r1[3] > r2[1] && r1[0] < r2[2] && r1[1] < r2[3]);
}
int main() {
    vector<int> rec1 = {0,0,2,2};
    vector<int> rec2 = {1,1,3,3};
    cout<<isRectangleOverlap(rec1, rec2)<<endl;
    vector<int> rec3 = {0,0,1,1};
    vector<int> rec4 = {1,0,2,1};
    cout<<isRectangleOverlap(rec3, rec4)<<endl;
    return 0;
}