//Constructor
#include <iostream>
#include <string>
using namespace std;
class car {
    string name;
    string color;

    public:
    car() {
        cout<<"constructor is called without parameter"<<endl;
    }
    car (string name, string c) {
        cout <<"countructor is called (with parameters). object being created!!!\n";
        this -> name = name;
        color =c;
    }
    void start() {
        cout<< "Car has started.....";
    }
    void end() {
        cout <<"Car has stopped.....";
    }

    //getter
    string getname(){
        return name;
    }
    string getcolor() {
        return color;
    }
};
int main() {
    car c0;                                //constructor without parameter
    car c1 ("Jaguar","pink");              //constructor with parameter
    cout<<c1.getname()<<endl;
    cout<<c1.getcolor()<<endl;
    return 0;
}