//Sum of Two Integers
#include <iostream>
using namespace std;
int getSum(int a, int b) {
    while (b != 0) {
        int sum = a ^ b;
        int carry = (a & b) << 1;
        a = sum;
        b = carry;
    }
    return a;
}
int main () {
    cout << getSum(1,2) <<endl;
    cout << getSum(2,3) <<endl;
    return 0;
}