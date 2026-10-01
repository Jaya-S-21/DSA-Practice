//Sqrt(x)
#include <iostream>
using namespace std;
int mySqrt(int x) {
    int l =0, r= x;
    while(l <= r) {
        int mid = (l + r) /2;
        if ((long long)mid * mid == x) {
            return mid;
            break;
        } else if ((long long)mid* mid < x) {
            l = mid + 1;
        } else {
            r = mid -1;
        }
    }
    return r;
}
int main() {
    int x = 25;
    cout<<mySqrt(x)<<endl;
    int x2 = 8;
    cout<<mySqrt(x2)<<endl;
    return 0;
}