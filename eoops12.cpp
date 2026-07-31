//Function and Operator Overloading
#include <iostream>
using namespace std;
class print {
    public:
    void show(int x) {
        cout <<"int: "<<x<<endl;
    }
    void show(string a) {
        cout<<"string: "<<a<<endl;
    }
};
class ccomplex {
    public:
    int real;
    int img;
    ccomplex(int r, int i) {
        real =r;
        img = i;
    }
    void show () {
        cout <<real<<" + "<<img<<"i \n";
    }
    ccomplex operator + (ccomplex &c) {
        int resreal = real + c.real;
        int resimg = img + c.img;
        ccomplex c3(resreal, resimg);
        return c3;
    }
};
int main() {
    cout <<"FUNCTION OVERLOADING"<<endl;
    print p1;
    p1.show(21);
    p1.show("Jaya");

    cout<<"OPERATOR OVERLOADING"<<endl;
    ccomplex c1(1,2), c2(3,4) ;
    c1.show();
    c2.show();
    ccomplex c3 = c1+c2;
    c3.show();
    return 0;
}