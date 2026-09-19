//Reverse words in a String III
#include <iostream>
#include <algorithm>
using namespace std;
string reverseWords(string s) {
    int i =0;
    for (int j=1; j<= s.length(); j++) {
        if (j == s.length() || s[j] == ' ') {
            reverse(s.begin()+i, s.begin()+j);
            i = j+1;
        }
    }
    return s;
}
int main() {
    string s = "Let's take LeetCode contest";
    cout<<reverseWords(s)<<endl;
    string s2 = "Mr Ding";
    cout<<reverseWords(s2)<<endl;
    return 0;
}