//Clear range of bits from i to j
#include <iostream>
using namespace std;
void clearrangeofbits(int num, int i, int j){
    int mask1 = (~0) << (j+1);
    int mask2 = (1 << i) -1;
    int bitmask = mask1 | mask2;
    cout<< (num & bitmask)<< endl;
}
int main() {
    clearrangeofbits(31,1,3);
}