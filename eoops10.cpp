//Multiple Inheritance
#include <iostream>
using namespace std;
class teacher{
    public:
    int salary;
    string subject;
    
};
class student {
    public:
    int rollno;
    float cgpa;
};
class ta: public teacher, public student {
    public:
    string name;
};
int main() {
    ta ta1;
    ta1.name = "jaya";
    ta1.salary= 75000;
    ta1.subject = "c++";
    ta1.cgpa= 8.20;
    ta1.rollno = 10;
    cout <<ta1.name<<endl;
    cout <<ta1.subject<<endl;
    cout <<ta1.salary<<endl;
    cout <<ta1.cgpa<<endl;
    cout <<ta1.rollno<<endl;
    return 0;
}