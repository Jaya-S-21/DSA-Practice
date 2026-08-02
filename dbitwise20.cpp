//Integer Complement
#include <iostream>
using namespace std;
int findComplement(int n) {
    int count =0;
    int a = n;
    while (a >0) {
        count ++;
        a = a>> 1;
    }
    long long bitmask = (1LL << count) - 1;
    return bitmask ^ n;
}
int main() {
    int n = 5;
    int k = findComplement(n);
    cout<<k<<endl;
}