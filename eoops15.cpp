//Static Variable
#include <iostream>
using namespace std;
void counter() {
    static int count =0;
    count++;
    cout<<"count: "<<count<<endl; 
}
class ccounter{
    public:
    static int x;
};
int ccounter::x =0;

int main() {
    counter();        //1
    counter();        //2
    counter();        //3

    ccounter c1, c2, c3;
    cout<<c1.x++<<endl;         //0
    cout<<c2.x++<<endl;         //1
    cout<<c3.x++<<endl;         //2
    return 0;
}