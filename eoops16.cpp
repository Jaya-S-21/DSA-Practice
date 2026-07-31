//Friend class & function
#include <iostream>
using namespace std;
class a {
    string secret = "secret data";
    friend class b;
    friend void revealsecret(a &obj);
};
class b {     //becomes a friend class of b
    public:
    void showsecret(a &obj) {
        cout <<obj.secret<<endl;
    }
};

void revealsecret(a &obj) {
    cout <<obj.secret<<endl;
}

int main() {
    a a1;
    b b1;
    b1.showsecret(a1);

    revealsecret(a1);
    return 0;
}