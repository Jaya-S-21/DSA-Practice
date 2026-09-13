//Climbing Stairs
#include <iostream>
using namespace std;
int climbStairs(int n) {
    if (n <= 2) return n;
    int a = 1, b = 2;
    for (int i =3; i<=n; i++) {
        int curr = a+ b;
        a = b;
        b = curr;
    }
    return b;
}
// int climStairs(int n) {
//     if (n <= 2) return n;
//     return climbStairs(n-1) + climStairs(n-2); 
//     // same as recursion
// }
int main() {
    int n = 3;
    cout<<climbStairs(n)<<endl;
    int n2 = 45;
    cout<<climbStairs(n2)<<endl;
    return 0;
}