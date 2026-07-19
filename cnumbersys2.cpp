//Binary to Decimal
#include <iostream>
using namespace std;
void bintodec(int binnum) {
    int n = binnum;
    int decnum =0;
    int pow = 1;
    while (n >0)  {
        int lastdig = n % 10;
        decnum = decnum + lastdig * pow;
        pow = pow *2;
        n = n/10;
    }
    cout <<decnum<<endl;
}
int main() {
    bintodec(101);
    return 0;
}