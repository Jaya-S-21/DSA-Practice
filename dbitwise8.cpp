//Check for power of 2
#include <iostream>
using namespace std;
void powertwo(int num) {
    if (!(num & (num-1))) {
        cout <<"Power of 2";
    } else {
        cout <<"Not Power of 2";
    }
}
int main() {
    powertwo(4);
    return 0;
}