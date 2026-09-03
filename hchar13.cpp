//Merge Strings Alternately
#include <iostream>
using namespace std;
string mergeAlternately(string word1, string word2) {
    string ans = "";
    int i =0;
    while (i<word1.length() || i<word2.length()) {
        if (i <word1.length()) {
            ans += word1[i];
        }
        if (i <word2.length()) {
            ans += word2[i];
        }
        i++;
    }
    return ans;
}
int main() {
    string word1 = "abc";
    string word2 = "pqr";
    cout<<mergeAlternately(word1, word2)<<endl;
    string word3 = "ab";
    string word4 = "pqrs";
    cout<<mergeAlternately(word3, word4)<<endl;
    return 0;
}