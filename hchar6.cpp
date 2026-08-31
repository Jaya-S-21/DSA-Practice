//<cstring> Funtions
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str1[100];
    char str2[100] = "hello coding world";
    // strcpy(str1,"hello world");
    strcpy(str1, str2);
    cout<<str1<<endl;

    char str3[50] = "abc";
    char str4[50] = "xyz";
    strcat(str3,str4);
    cout<<str3<<endl;

    char str5[10] = "abc";
    char str6[10] = "abc";
    char str7[10] = "xyz";
    char str8[20] = "strawberry";
    char str9[10] = "x";
    cout<<strcmp(str5, str6)<<endl; //0
    cout<<strcmp(str6, str7)<<endl; //-1 
    cout<<strcmp(str7, str6)<<endl; //1
    cout<<strcmp(str8, str9)<<endl; //-1
    return 0;
}