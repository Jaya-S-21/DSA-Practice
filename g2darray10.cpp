//Matrix Pointer
#include <iostream>
using namespace std;
void func(int mat[][4], int n, int m) {
    cout << "0th row ptr: " << mat <<endl; //0th row ptr: 0x3c859ffaf0
    cout << "1th row ptr: " << mat+1 <<endl;
    cout << "2th row ptr: " << mat+2 <<endl;

    cout << "0th row value: " << *mat <<endl; //0th row ptr: 0x3c859ffaf0
    cout << "1th row value: " << *(mat+1) <<endl;
    cout << "2th row value: " << *(mat+2) <<endl;

    cout<< *(*(mat+2)+2); //11
}
int main() {
    int mat[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    func(mat, 4, 4);
}