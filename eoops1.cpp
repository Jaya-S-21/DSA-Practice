#include <iostream>
#include <string>
using namespace std;
class student {
    //properties
    string name;
    float cgpa;

    //methods
    public:
    void getPercentage() {
        cout<< (cgpa * 10) << "% \n";
    }

    //setters
    void setName(string n) {
        name = n;
    }
    void setCgpa(float c) {
        cgpa = c;
    }

    //getters
    string getName() {
        return name;
    }
    float getCgpa() {
        return cgpa;
    }
};
int main() {
    student s1;
    cout <<sizeof(s1)<<endl;
    // s1.name = "Jaya";
    // cout<<s1.name;endl;
    // s1.cgpa = 8.20;
    // cout <<cgpa <<endl;
    s1.setName("Jaya");
    s1.setCgpa(8.20);
    cout <<s1.getName()<<endl;
    cout <<s1.getCgpa()<<endl;
    return 0;
}