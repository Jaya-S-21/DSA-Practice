//Harshad Number
#include <iostream>
using namespace std;
int sumOfTheDigitsOfHarshadNumber(int x) {
    int num = x, sum =0;
    while(num >0) {
        sum = sum + (num % 10);
        num = num / 10;
    }
    if ( x % sum == 0) {
        return sum;
    } else return -1;
}
int main() {
    int x = 18;
    cout<<sumOfTheDigitsOfHarshadNumber(x)<<endl;
    int x2 = 23;
    cout<<sumOfTheDigitsOfHarshadNumber(x2)<<endl;
    return 0;
}