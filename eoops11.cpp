// Hierarchical Inheritance
#include <iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"eat...\n";
    }
    void breathe(){
        cout <<"breathe...\n";
    }
};
class fish : public animal {
    public:
    void swim () {
        cout <<"swim...\n";
    }
};
class bird :public animal{
    public:
    void fly() {
        cout <<"fly...\n";
    }
};
class mammal: public animal {
    public:
    void walk() {
        cout <<"walk...\n";
    }
};
int main() {
    fish f1;
    f1.eat();
    f1.swim();

    bird b1;
    b1.eat();
    b1.fly();

    mammal m1;
    m1.eat();
    m1.walk();
    return 0;
}