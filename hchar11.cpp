//Find the Index of the First Occurrence in a String
#include <iostream>
using namespace std;
int strStr(string haystack, string needle) {
    if (needle.length() > haystack.length()) {
        return -1;
    }
    for (int i=0; i<= haystack.length() - needle.length(); i++) {
        if (haystack.substr(i, needle.length()) == needle){
            return i;
        }
    }
    return -1;
}
int main() {
    string haystack = "sadbutsad";
    string needle = "sad";
    cout <<strStr(haystack, needle)<<endl;
    string haystack1 = "leetcode";
    string needle1 = "leeto";
    cout <<strStr(haystack1, needle1)<<endl;
    return 0;
}