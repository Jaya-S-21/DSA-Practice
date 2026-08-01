//Student Class
#include <iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(string n, int a) {
        name =n;
        age = a;
    }
};
class student: public person{
    public:
    string studentid;
    student(string n, int a, string id): person(n, a){
        studentid = id;
    } 
    void displaystudentinfo() {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout <<"Student ID: "<<studentid<<endl;
    }
};
int main() {
    student student("Alice",20,"S12345");
    student.displaystudentinfo();
    return 0;
}