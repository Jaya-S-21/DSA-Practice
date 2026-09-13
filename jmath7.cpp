//Number of Steps to Reduce a Number to Zero
#include <iostream>
using namespace std;
int numberOfSteps(int num) {
    int count = 0;
    while ( num > 0) {
        if (num % 2 == 0) {
            num = num / 2;
        } else {
            num = num - 1;
        }
        count ++ ;
    }
    return count ;
}
int main() {
    int n = 14;
    cout << numberOfSteps(n)<<endl;
    int n2 = 8;
    cout<< numberOfSteps(n2) <<endl;
    return 0;
}