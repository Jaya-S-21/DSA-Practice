//Function Overriding & Virtual Function
#include <iostream>
using namespace std;
class parent {
    public:
    void show() {
        cout<<"parent class show......\n";
    }
    virtual void hello() {                             //virtual function
        cout<<"parent hello....\n";
    }
};
class child : public parent {
    public:
    void show() {
        cout<<"child class show......\n";
    }
    void hello() {
        cout<<"child hello....\n";
    }
};
int main() {
    cout <<"FUNCTION OVERRIDING"<<endl;
    child c1;
    c1.show();

    cout<<"VIRTUAL FUNCTION"<<endl;
    child c2;
    parent *ptr;
    ptr = &c2;                                //runtime binding
    ptr->hello();                             //child class will run
    return 0;
}