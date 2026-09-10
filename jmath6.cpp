//Subtract the Product and Sum of Digits of an Integer
#include <iostream>
using namespace std;
int subtractProductAndSum(int n) {
    int prod =1, sum= 0;
    int num = n;
    while (num > 0) {
        int lastdig = num % 10;
        prod *= lastdig;
        sum += lastdig;
        num /= 10;
    }
    return prod - sum;
}
int main() {
    int n = 234;
    cout<< subtractProductAndSum(n)<<endl;
    int n2 = 4421;
    cout<< subtractProductAndSum(n2)<<endl;
    return 0;
}
