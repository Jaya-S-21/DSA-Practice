//Sum of n Natural numbers
#include <iostream>
using namespace std;
int sumofNaturalno(int n) {
    if ( n == 1) {
        return 1;
    }
    return n + sumofNaturalno(n-1);
}
int main() {
    int n = 10;
    cout << sumofNaturalno(n)<< endl;
    return 0;
}