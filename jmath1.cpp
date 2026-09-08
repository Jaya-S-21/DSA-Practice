//Count Commas in Range
#include <iostream>
using namespace std;
int countCommas(int n) {
    if (n < 1000) return 0;
    return (n - 1000) + 1;
}
// int countCommas(int n) {
//     int count =0;
//     for (int i=0; i <=n; i++) {
//         if (i >= 1000) {
//             count++;
//         }
//     }
//     return count;
// }
int main() {
    int n = 1002;
    cout << countCommas(n) <<endl;
    int n2 = 998;
    cout<<countCommas(n2) <<endl;
    return 0;
}