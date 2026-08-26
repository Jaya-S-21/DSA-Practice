//Sum of 2nd row
#include <iostream>
using namespace std;
void sumof2mdrow(int nums[][3], int n, int m) {
    int sum =0;
    for (int i = 0; i <m; i++) {
        sum += nums[1][i];
    }
    cout <<"Sum of Second Row: "<<sum<<endl;
}
int main() {
    int nums[3][3]={{1,4,9},{11,4,3},{2,2,3}};
    sumof2mdrow(nums,3,3);
    return 0;
}