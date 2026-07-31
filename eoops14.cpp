//Abtract class & Pure Virtual Function
#include <iostream>
using namespace std;
class shape {
    public:
    virtual void draw() =0;               //pure virtual func/ abstract func
};
class circle: public shape{
    public:
    void draw() {
        cout<<"circle draws...\n";
    }
};
class square : public shape {
    public:
    void draw() {
        cout<<"square draws...\n";
    }
};
int main() {
    circle c1;
    square s1;
    c1.draw();
    s1.draw();

    // shape s1;                      
    // s1.draw();                        //error
    return 0;
}