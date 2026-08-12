//Friends Pairing Problem
#include <iostream>
using namespace std;
int friendspairing(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    return friendspairing(n-1) + (n-1) * friendspairing(n-2);
}
int main() {
    cout << friendspairing(2) <<endl;
    cout << friendspairing(3) <<endl;
    cout << friendspairing(4) <<endl;
    cout << friendspairing(5) <<endl;
    cout << friendspairing(6) <<endl;
    return 0;
}