//String Compression
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int compress(vector<char>& chars) {
    int n = chars.size();
    int write =0;
    int i =0;
    while (i < n) {
        int j = i;
        while (j < n && chars[j] == chars[i]) {
            j++;
        }
        int count = j - i;
        chars[write++] = chars[i];
        if (count > 1) {
            string cnt = to_string(count);
            for (char c: cnt) {
                chars[write++] = c;
            }
        }
        i = j;
    }
    return write;
}
int main() {
    vector<char> chars = {'a','a','b','b','c','c','c','c'};
    cout<<compress(chars)<<endl;
    vector<char> chars2 = {'a','b','b','b','b','b','b','b','b','b','b','b','b','b','b'};
    cout<<compress(chars2)<<endl;
    return 0;
}