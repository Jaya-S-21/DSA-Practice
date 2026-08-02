//Complement of Base 10 Integer
#include <iostream>
using namespace std;
int bitwiseComplement(int n) {
    if (n == 0) return 1;
    int count =0;
    int a = n;
    while (a >0) {
        count ++;
        a = a>> 1;
    }
    int bitmask = (1 << count) - 1;
    return bitmask ^ n;
}
int main() {
    int n = 5;
    int k = bitwiseComplement(n);
    cout<<k<<endl;
}