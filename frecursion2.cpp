//Printing numbers in Decreasing Order
#include <iostream>
using namespace std; 
void decreaseorder(int n) {
    if (n == 0) {
        return ;
    } 
    cout << n <<" ";
    decreaseorder(n-1);
}
int main() {
    int n = 20;
    decreaseorder(n);
    return 0;
}