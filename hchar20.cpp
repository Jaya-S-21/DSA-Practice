//Truncate Sentence
#include <iostream>
using namespace std;
string truncateSentence(string s, int k) {
    for (int i=0; i< s.size(); i++) {
        if (s[i] == ' ' && --k == 0) {
            return s.substr(0,i);
        }
    }
    return s;
}
int main() {
    string s = "Hello how are you contestant";
    int k= 4;
    cout<< truncateSentence(s,k)<<endl;
    string s2 = "chopper is not a tanuki"; 
    int k2 = 5;
    cout<< truncateSentence(s2,k2)<<endl;
    return 0;
}