//copy constructor 
#include <iostream>
#include <string>
using namespace std;
class car {
    public:
    string name;
    string color;
    car (string n, string c) {
        name = n;
        color = c;
    }
    car(car &original) {
        cout <<"copying original to new\n";
        name = original.name;
        color =original.color;
    }
};
int main() {
    car c1("maruti 800", "pink");
    car c2(c1);
    cout<< c2.name<<endl;
    cout <<c2.color<<endl;
    return 0;
}