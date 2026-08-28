//Convert to Lowercase 
#include <iostream>
#include <cstring>
using namespace std;
void toLower(char word[], int n) {
    for (int i=0 ; i <n; i++) {
        char ch = word[i];
        if (ch >= 'a' && ch <= 'z') {  //lowercase
            continue;
        } else {                       //uppercase
            word[i] = ch - 'A' + 'a';
        }
    }
}
int main() {
    char word[] = "JAYASANKHLA";
    toLower(word, strlen(word));
    cout <<word<<endl;
    return 0;
}