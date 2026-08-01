//Reverse Bits
#include <iostream>
#include <vector>
using namespace std;
int reverseBits(int n) {
    int ans = 0;
    for (int i =0; i <32; i++) {
        ans = ans << 1;
        ans = ans | (n & 1);
        n= n >> 1;
    }
    return ans;
}
int main() {
    int n = 43261596;
    int k =reverseBits(n);
    cout<<k<<endl;
    return 0;
}