//Check if two string arrays are equivalent
#include <iostream>
#include <vector>
using namespace std;
bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
    string s1 = "";
    string s2 = "";
    for (int i=0; i< w1.size(); i++) {
        s1 += w1[i];
    }
    for (int i=0; i< w2.size(); i++) {
        s2 += w2[i];
    }
    return s1 == s2;
}
int main() {
    vector<string> w1 = {"ab","c"};
    vector<string> w2 = {"a","bc"};
    cout<< arrayStringsAreEqual(w1,w2)<<endl;
    vector<string> w3 = {"a","cbd"};
    vector<string> w4 = {"ab","c"};
    cout<< arrayStringsAreEqual(w3,w4)<<endl;
    return 0;
}