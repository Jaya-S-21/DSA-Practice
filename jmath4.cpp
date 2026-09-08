//Add Digits
#include <iostream>
using namespace std;
int addDigits(int num) {
    int add =0;
    while (num > 0) {
        add = add + (num %10);
        num = num/10;  
    } 
    if (add < 10) {
        return add;
    }
    else return addDigits(add);
}
int main() {
    int num = 38;
    cout << addDigits(num)<<endl;
    int num2 = 0;
    cout << addDigits(num2) <<endl;
    return 0;
}