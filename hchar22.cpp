//Valid Palindrome
#include <iostream>
using namespace std;
 bool isPalindrome(string s) {
    string ans = "";
    for (int i=0; i<s.size(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z') {
            ans += s[i] - 'A' + 'a';
        } if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
            ans += s[i];
        }        
    }    
    int l=0, r=ans.size()-1;        
    while(l<=r){
        if(ans[l++] != ans[r--]){
            return false;
        }
    }
    return true;
}
int main() {
    string s = "A man, a plan, a canal: Panama";
    cout<< isPalindrome(s)<<endl;
    return 0;
}