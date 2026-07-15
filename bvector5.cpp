//vector basics
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec = {1,2,3,4,5};
    cout <<"Size: "<<vec.size()<<endl; //5
    cout <<"Capacity: "<<vec.capacity() <<endl; //5
    vec.push_back(6);
    cout <<"Size: "<<vec.size()<<endl; //6
    cout <<"Capacity: "<<vec.capacity() <<endl; //10
    vec.pop_back();
    cout <<"Size: "<<vec.size()<<endl; //5
    cout <<"Capacity: "<<vec.capacity() <<endl; //10
    return 0;
}
