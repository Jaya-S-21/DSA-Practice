// Decimal to Binary
#include <iostream>
using namespace std;
void dectobin(int decnum) {
    int n = decnum;
    int binnum =0;
    int pow = 1;
    while (n > 0) {
        int a = n /2;
        int b = n%2;
        binnum = binnum + b * pow;
        pow = pow *10;
        n = a;
    }
    cout <<binnum<<endl;
}
int main () {
    dectobin(1000);
    return 0;
}