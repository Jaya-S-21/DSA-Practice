//Count set bits (total of bits)
#include <iostream>
using namespace std;
void countsetbits(int num) {
     int count =0;
     while (num > 0) {
        int lastbit = num & 1;
        count= count + lastbit;
        num = num >> 1;
     }
     cout <<count<<endl;
}
int main() {
    countsetbits(15);
    return 0;
}