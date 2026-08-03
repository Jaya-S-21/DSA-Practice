//Factorial
#include <iostream>
using namespace std;
int factorial(int n) {
    if (n ==0) {
        return 1;
    } 
    return n * factorial(n-1);
}
int main() {
    int n = 32;
    int k = factorial(n);
    cout<<k<<endl;
    return 0;
}