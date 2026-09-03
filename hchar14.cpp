//Greatest Common Divisor of Strings
#include <iostream>
#include <numeric>
#include <cstring>
using namespace std;
string gcdOfStrings(string str1, string str2) {
    if (str1+ str2 != str2 + str1) {
        return "";
    } else {
        return str1.substr(0, gcd(str1.length(), str2.length()));
    }    
}
int main() {
    string str1 = "ABCABC";
    string str2 = "ABC";
    cout<<gcdOfStrings(str1,str2)<<endl;
    string str3 = "ABABAB";
    string str4 = "ABAB";
    cout<<gcdOfStrings(str3,str4)<<endl;
    string str5 = "LEET";
    string str6 = "CODE";
    cout<<gcdOfStrings(str5,str6)<<endl;
    return 0;
}