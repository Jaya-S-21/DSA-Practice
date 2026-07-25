//practice question
#include <iostream>
using namespace std;
class user {
    string id;
    string password;

    public:
    string username;

    user(string id){
        this->id =id;
    }

    void setpassword(string pasw) {
        password = pasw;
    }
    string getpassword() {
        return password;
    } 
    string getid() {
        return id;
    }
};
int main () {
    user u1 ("ABC101");
    u1.username = "Jaya Sankhla";
    u1.setpassword("jaya@110");
    cout<< "username: " <<u1.username<<endl;
    cout<< "password: " << u1.getpassword()<<endl;
    cout<< "id: " <<u1.getid()<<endl;
    return 0;
}