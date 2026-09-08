//Happy number
#include <iostream>
using namespace std;
bool isHappy(int n) {
    if (n ==1 || n == 7) return true;
    else if (n <10) return false;
    else {
        int num = n;
        int happy = 0;
        while (num > 0) {
            int lastdig = num % 10;
            happy += lastdig * lastdig;
            num /= 10;
        }
        return isHappy(happy);
    }
}
int main() {
    int n = 19;
    cout<< isHappy(n) <<endl;
    int n2 = 2;
    cout << isHappy(n2) <<endl;
    return 0;
}