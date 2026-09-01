//No of Lowercase Character
#include <iostream>
#include <cstring>
using namespace std;
int countlower(string str) {
    int count =0;
    for (int i=0; i <str.length(); i++) {
        if (str[i] == 'a' || str[i] =='e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }
    return count;
}
int main() {
    string str = "HELLO how ARE you";
    cout<<countlower(str)<<endl;
    return 0;
}