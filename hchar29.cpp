//Count and Say
#include <iostream>
using namespace std;
string countAndSay(int n) {
    string s = "1";
    while (n > 1) {
        string next = "";
        int i =0;
        while (i < s.length()) {
            int j = i;
            while (j < s.length() && s[i] == s[j]) {
                j++;
            }
            int count  = j- i;
            next += to_string(count);
            next += s[i];
            i = j;
        }
        s = next;
        n--;
    }
    return s;
}
int main() {
    int n = 4;
    cout<<countAndSay(n)<<endl; 
    int n2 = 1;
    cout<<countAndSay(n2)<<endl;
    return 0;
}