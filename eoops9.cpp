//Multi Level Inheritance
#include <iostream>
using namespace std;
class animal{
    public:
    void eat() {
        cout<<"eats....\n";
    }
    void breathe() {
        cout <<"breathes....\n";
    }
};
class mammal : public animal {
    public:
    string bloodtype;
    mammal() {
        bloodtype = "warm";
    }
};
class dog : public mammal {
    public:
    void tailwag() {
        cout <<"dog wags its tail\n";
    }
};
int main() {
    dog d1;
    d1.eat();
    d1.breathe();
    d1.tailwag();
    cout <<d1.bloodtype<<endl;
    return 0;
}