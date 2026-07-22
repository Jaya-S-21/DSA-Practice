//Update ith Bit
#include <iostream>
using namespace std;
void updatezero(int num, int i) {
    int bitmask = ~(1<<i);
    num =num & bitmask;
    cout <<num <<endl;
}
void updateone(int num, int i) {
    int bitmask = 1<<i;
    num = num | bitmask;
    cout<<num ;
}
int main() {
    updatezero(7,2);
    updateone(7,3);
    return 0;
}