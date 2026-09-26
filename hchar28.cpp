//Detect Capital
#include <iostream>
using namespace std;
bool detectCapitalUse(string word) {
    int count =0;
    for (int i=0; i<word.size(); i++) {
        if (isupper(word[i])) {
            count++;
        }
    }
    if(count == word.length()) { //uppercase
        return true;
    } else if (isupper(word[0]) && count == 1) { //first word capital rest small
        return true;
    } else if (count == 0) { //lowercase
        return true;
    } else return false;
}
int main() {
    string word1 = "INDIA";
    cout<<detectCapitalUse(word1)<<endl;
    string word2 = "Flag";
    cout<<detectCapitalUse(word2)<<endl;
    string word3 = "jayA ";
    cout<<detectCapitalUse(word3)<<endl;
    return 0;
}