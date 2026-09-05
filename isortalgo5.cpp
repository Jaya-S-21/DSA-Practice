//Sort array of char using Insertion Sort in Descending Order
#include <iostream>
using namespace std;
void print (char ch[], int n) {
    for (int i=0; i< n; i++) {
        cout <<ch[i]<< " ";
    }
    cout<<endl;
}
void charInsertionDescend(char ch[], int n) {
    for (int i=1; i<n; i++) {
        char curr = ch[i];
        int prev = i-1;
        while (prev >=0 && ch[prev] < curr) {
            ch[prev +1] = ch[prev];
            prev--;
        }
        ch[prev+1] = curr;
    }
    print(ch,n);
}
int main() {
    char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    charInsertionDescend(ch, 6);
    return 0;
}