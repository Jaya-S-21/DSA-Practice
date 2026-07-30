//Deconstructor
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
    ~car() {
        cout<<"DELETING MEMORY...."<<endl;
        if (mileage != NULL){
            delete mileage;
            mileage= NULL;
        }
    }
};
int main() {
    car c1("maruti 800", "pink");
    cout<< c1.name<<endl;
    cout <<c1.color<<endl;
    cout <<*c1.mileage<<endl;                        
                    
    return 0;
}