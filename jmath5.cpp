//Valid Perfect Square
#include <iostream>
using namespace std;
bool isPerfectSquare(int num) {
    if (num < 2) return true;
    int start= 2, end = num/2;
    while(start <= end) {
        int mid = (start+end)/2;
        long long sqr = 1LL* mid*mid;
        if (num == sqr) {
            return true;
        } else if (sqr > num) {
            end = mid -1;
        } else {
            start = mid +1;
        }
    }
    return false;
}
int main() {
    int num = 16;
    cout<< isPerfectSquare(num)<<endl;
    int num2 = 100;
    cout << isPerfectSquare(num2) <<endl;
    int num3 = 200;
    cout << isPerfectSquare(num3) <<endl;
    return 0;
}