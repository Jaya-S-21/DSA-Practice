//Print all 7's from 2d array
#include <iostream>
using namespace std;
void frequency(int arr[][3], int n, int m) {
    int count =0;
    for (int i =0; i <n; i++) {
        for (int j =0; j <m; j++) {
            if (arr[i][j] == 7) {
                count++;
            }
        }
    }
    cout<< "Count of 7: "<<count<<endl;
}
int main() {
    int arr[2][3]={{4,7,8},{8,8,7}};
    frequency(arr,2,3);
    return 0;
}