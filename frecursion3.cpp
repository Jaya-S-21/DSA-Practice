//Printing numbers in Increasing Order
#include <iostream>
using namespace std; 
void increaseorder(int n) {
    if (n == 0) {
        return ;
    } 
    increaseorder(n-1);
    cout << n <<" ";
}
int main() {
    int n = 20;
    increaseorder(n);
    return 0;
}

// The cout doesn't execute while the function calls are going deeper. It executes while the function calls are returning (coming back).