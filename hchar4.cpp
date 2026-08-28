//Reverse a Char Array
#include <iostream>
#include <cstring>
using namespace std;
void reverse(char word[], int n) {
    int st =0, en = n-1;
    while (st <= en) {
        swap(word[st], word[en]);
        st++;
        en--;
    }
}
int main() {
    char word[] = "code";
    reverse(word, strlen(word));
    cout<<word<<endl;
    return 0;
}