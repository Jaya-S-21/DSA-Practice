// Clear ith bit
#include <iostream>
using namespace std;
void clearithbit(int num, int i) {
    int bitmask= (~0) <<i;
    cout <<(num & bitmask);
}
int main () {
    clearithbit(15,2);
    return 0;
}