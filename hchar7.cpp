//String Properties
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str = "hello";
    cout<<str<<endl;
    str = "yellow";
    cout<<str<<endl;

    string str1;
    cin>>str1;
    cout<<"Your Word: "<<str1<<endl;

    string str2;
    getline(cin,str2);
    cout<<"Your Word: "<<str2<<endl;
    cout<<str2[0]<<endl;
    cout<<str2[1]<<endl;
    cout<<str2[7]<<endl;

    //loops
    string str3 = "apna college!";
    for(int i=0; i<str3.length(); i++) {
        cout<<str3[i]<<"-";
    }
    cout<<"\n";

    for (char ch: str3) {
        cout<<ch<<",";
    }
    cout<<endl;

    cout<<str3.length()<<endl; //13
    cout<<str3[3]<<endl; //a
    cout<<str3.at(3)<<endl; //a
    cout<<str3.substr(1,5)<<endl; //pna c
    
    string str4 = "i love coding in c++ but i don't like python";
    cout<<str4.find("c++")<<endl; //17

    string str5 = "i love coding in c++ but i don't like c++";
    cout<<str5.find("c++",20)<<endl; //38
    int idx = str5.find("python");
    cout<<idx<<endl;
    return 0;
}