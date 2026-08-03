//Fibonacci Number
#include <iostream>
using namespace std;
int fibonacci(int n){
    if (n == 0 || n ==1) {
        return n;
    }
    int m = fibonacci(n-1) + fibonacci(n-2);
    return m ;
}
int main() {
    cout << fibonacci(5) <<endl ;
    return 0;
}