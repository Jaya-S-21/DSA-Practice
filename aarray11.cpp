//Palindrome Number
#include <iostream>
using namespace std;
bool palindrome(int x) {
    int orig = x; 
    int rev =0, dig;
    while(orig > 0) {
        dig = orig%10;
        orig/=10;
        rev = rev *10 + dig;
    }
    return rev == x;
}
int main() {
    int x;
    cout<<"Enter no you want to check: ";
    cin>>x;
    if (palindrome(x)){
        cout<<true<<endl;
    }else{
        cout<<false<<endl;
    }
    return 0;
}