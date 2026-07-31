//Static Variable & Static Object
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

class example{
    public:
    example() {
        cout<<"constructor..."<<endl;
    }
    ~example() {
        cout<<"destructor..."<<endl;
    }
};

int main() {
    counter();        //1
    counter();        //2
    counter();        //3

    ccounter c1, c2, c3;
    cout<<c1.x++<<endl;         //0
    cout<<c2.x++<<endl;         //1
    cout<<c3.x++<<endl;         //2

    int x=0;
    if(x==0) {
        example e1;                 // or static example e1
    }
    cout<<"code ending....."<<endl;
    return 0;
}