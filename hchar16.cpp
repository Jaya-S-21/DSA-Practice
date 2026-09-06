//Repeated Substring Pattern
#include <iostream>
#include <cstring>
using namespace std;
bool repeatedSubstringPattern(string s) {
    int n= s.length(); 
    for (int i=1; i<=n/2; i++) {
        bool repeated = true;
        if (n % i == 0) {
            for (int j= i; j <n; j++) {
                if (s[j] != s[j % i]) {
                    repeated = false;
                    break;
                }
            }
            if (repeated) return true;
        }
    }
    return false;
}

// bool repeatedSubstringPattern(string s) {
//     string doub = s+s;
//     if (doub.substr(1,doub.size()-2).find(s) != -1) {
//         return true;
//     }
//     return false;
// }

int main() {
    string s = "abab";
    cout<<repeatedSubstringPattern(s)<<endl;
    string s2 = "abcabcabc";
    cout<<repeatedSubstringPattern(s2)<<endl;
    string s3 = "abcab";
    cout<<repeatedSubstringPattern(s3)<<endl;
    return 0;
}