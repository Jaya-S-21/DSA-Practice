//Valid Palindrome
#include <iostream>
#include <cstring>
using namespace std;
bool validPalindrome(char word[], int n) {
    int st = 0, en = n-1;
    while (st <= en) {
        if (word[st] != word[en]) {
            return false;
        }
        st++;
        en--;
    }
    return true;
}
int main() {
    char word[] = "racecar";
    cout<<validPalindrome(word, strlen(word))<<endl;
    char word1[] = "helloc";
    cout<<validPalindrome(word1, strlen(word1))<<endl;
    char word2[] = "madam";
    cout<<validPalindrome(word2, strlen(word2))<<endl;
    return 0;
}