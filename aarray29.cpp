//Power of 3
#include <iostream>
using namespace std;
bool isPowerof3 (int n) {
    if (n <=0) { 
        return false;
    }
    while (n % 3 == 0) {
        n = n/3;
    }
    return n == 1;

}
int main() {
    int n = 243;
    int k = isPowerof3(n);
    cout<<k<<endl;
    return 0;
}