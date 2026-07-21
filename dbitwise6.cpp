//Set ith bit
#include <iostream>
using namespace std;
void setbit (int num, int i) {
    int bitmask = 1<<i;
    cout << (num | bitmask) <<endl;
}
int main() {
    setbit(6,3);
    return 0;
}