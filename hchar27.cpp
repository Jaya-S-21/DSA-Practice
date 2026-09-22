//Length of Last Word
#include <iostream>
using namespace std;
int lengthOfLastWord(string s) {
    int n= s.size() - 1;
    int count = 0;
    while(n >= 0 && s[n] == ' ') { //removing last space
        n--;
    }
    while(n >= 0 && s[n] != ' ') { //counting length of last word
        count++;
        n--;
    }
    return count;
}
int main() {
    string s = "Hello World";
    cout << lengthOfLastWord(s)<<endl;
    string s2 = "   fly me    to    the  moon   ";
    cout << lengthOfLastWord(s2)<<endl;
    return 0;
}