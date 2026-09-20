//Reverse Degree of a String
#include <iostream>
using namespace std;
int reverseDegree(string s) {
    int sum =0;
    for (int i=0; i< s.length(); i++) {
        sum += (26 - (s[i] - 'a')) * (i + 1);
    }
    return sum;
}
int main() {
    string s = "abc";
    cout<<reverseDegree(s)<<endl;
    string s2 = "zaza";
    cout<<reverseDegree(s2)<<endl;
    return 0;
}