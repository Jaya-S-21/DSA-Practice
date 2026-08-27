//Character Array
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char arr[4] = {'c','o','d','e'};
    cout<<arr[0]<<endl;
    cout<<arr<<endl;
    char arr2[5] = {'c','o','d','e','\0'};
    cout<<arr2<<endl;
    char work[5] = "code";
    cout<<work<<endl;
    char name[20] = {'j','a','y','a','\0'};
    cout<< strlen(name)<<endl;
    // char str[30];
    // cin>>str;
    // cout<<"Your word: "<<str<<endl;
    char str1[20];
    cin.getline(str1, 20, '*');
    cout<<"Your Word: "<<str1<<endl;
    return 0;
}