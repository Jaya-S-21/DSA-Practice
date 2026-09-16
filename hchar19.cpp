//To Lower Case
#include <iostream>
using namespace std;
string toLowerCase(string s) {
    for (int i=0; i< s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            int c = s[i] ;
            c =  s[i] - 'A' + 'a';
            s[i] = c;
        }
    }
    return s;
}
int main() {
    string s = "HelLo";
    cout<<toLowerCase(s)<<endl;
    string s2 = "LOVELY";
    cout<<toLowerCase(s2)<<endl;
    return 0;
}