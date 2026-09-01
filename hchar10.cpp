//First Unique Character in a String
#include <iostream>
using namespace std;
int firstUniqChar(string s) {
        int n = s.length();
        int count[26] = {0};
        for (int i=0; i <n; i++){
            count[s[i]-'a']++;
        }
        for (int i=0; i<n; i++) {
            if (count[s[i]-'a']==1) {
                return i;
            }
        }
        return -1;
}
int main() {
    string s = "loveleetcode";
    cout<<firstUniqChar(s)<<endl;
    return 0;
}
