//Is Subsequence
#include <iostream>
using namespace std;
bool isSubsequence(string s, string t) {
    int m = s.length();
    int n = t.length();
    int j=0;
    for (int i=0; i<n && j< m; i++) {
        if (s[j] == t[i]) {
            j++;
        }
    }
    return (j == m);
}
int main() {
    string s = "abc";
    string t = "ahbgdc";
    cout <<isSubsequence(s,t)<<endl;
    string s2 = "axc";
    string t2 = "abhgbc";
    cout << isSubsequence(s2,t2)<<endl;
    return 0;
}