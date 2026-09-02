//Reverse Vowels of a String
#include <iostream>
using namespace std;
string reverseVowels(string s) {   
    int st=0, en = s.length()-1;
    while (st <= en) {
        if ((s[st] != 'a' && s[st] != 'e' && s[st] != 'i' && s[st] != 'o' && s[st] != 'u' && s[st] != 'A' && s[st] != 'E' && s[st] != 'I' && s[st] != 'O' && s[st] != 'U')) {
            st++;
        } else if ((s[en] != 'a' && s[en] != 'e' && s[en] != 'i' && s[en] != 'o' && s[en] != 'u' && s[en] != 'A' && s[en] != 'E' && s[en] != 'I' && s[en] != 'O' && s[en] != 'U')) {
            en--;
        } else {
            swap(s[st], s[en]);
            st++;
            en--;
        }
    }
    return s;
}    
int main() {
    string s = "IceCreAm";
    cout<<reverseVowels(s)<<endl;
    string s2 = "leetcode";
    cout<<reverseVowels(s2)<<endl;
    return 0;
}