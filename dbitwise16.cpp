//Counting bits
#include <iostream>
#include <vector>
using namespace std;
vector<int> countBits(int n) {
    vector<int> ans(n+1);
    for (int i =0; i<= n; i++) {
        int count =0;
        int num = i;
        while (num > 0) {
            int lastbit = num & 1;
            count += lastbit;
            num = num >> 1;
        }
        ans[i] = count;
    }
    return ans;
}
int main() {
    int n =5;
    vector<int> ans =countBits(n);
    for(int i=0; i< ans.size(); i++) {
        cout<< ans[i] <<" ";
    }
    return 0;
}