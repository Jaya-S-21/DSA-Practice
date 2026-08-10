//Print X to the power of N
#include <iostream>
#include <vector>
using namespace std;
int pow(int x, int n) {
    if (n == 0) {
        return 1;
    }
    int halfpow = pow(x, n/2);
    int halfpowsqr = halfpow * halfpow;
    if (n % 2 != 0) {
        return x * halfpowsqr;
    }
    return halfpowsqr;
}
int main() {
    cout << pow(2,10) <<endl;
    cout << pow(2,5) <<endl;
    cout << pow(3,3) <<endl;
    cout << pow(10,6) <<endl;
    return 0;
}