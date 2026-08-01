//Power of 4
#include <iostream>
using namespace std;
bool isPowerOfFour(int n) {
    return n>0 && !(n & (n - 1)) && (n % 3 == 1);
}
int main() {
    int n =15;
    int k = isPowerOfFour(n);
    cout << k <<endl;
}