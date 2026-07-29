//Shallow and Deep Copy
#include <iostream>
#include <string>
using namespace std;
class car {
    public:
    string name;
    string color;
    int *mileage;

    car (string n, string c) {
        name = n;
        color = c;
        mileage = new int;              //dynamic allocation
        *mileage = 12;
    }
    car(car &original) {                            
        cout <<"copying original to new\n";
        name = original.name;
        color =original.color;
        // mileage = original.mileage;                            //same address will be copied (no new memory in heap)
        mileage = new int; 
        *mileage = *original.mileage;                      
    }
};
int main() {
    car c1("maruti 800", "pink");
    car c2(c1);
    cout<< c2.name<<endl;
    cout <<c2.color<<endl;
    cout <<*c2.mileage<<endl;                        //12

    *c2.mileage =10;
    cout <<*c1.mileage<<endl;                        //10       & 12
    cout <<*c2.mileage<<endl;                        //10
    return 0;
}