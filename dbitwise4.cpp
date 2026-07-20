//Odd & Even using Bitwise Operator
#include <iostream>
using namespace std;
void bitoddeven(int num) {
    if (num & 1) {
        cout<<"Odd"<<endl;
    }else {
        cout <<"Even"<<endl;
    }
}
int main() {
    bitoddeven(20);
    bitoddeven(7);
    return 0;
}