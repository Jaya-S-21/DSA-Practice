//Clear ith bit
#include <iostream>
using namespace std;
void clearbit(int num, int i) {
    int bitmask = ~(1<<i);
    cout<<(num & bitmask)<<endl;
}
int main() {
    clearbit(6,1);
    return 0;
}