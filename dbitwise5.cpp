//Check ith bit 
#include <iostream>
using namespace std;
void checkbit(int num, int i) {
    int bitmask = 1<<i;
    if (num & bitmask) {
        cout<<"1";
    } else {
        cout<<"0";
    }
}
int main() {
    checkbit(6,3);
    return 0;
}