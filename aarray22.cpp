//Find the Highest Altitude
#include <iostream>
#include <vector>
using namespace std;
int largestAltitude(vector<int>& gain) {
    int n = gain.size() ;
    vector<int> altitude(n+1);
    int maxaltitude = -100;
    altitude[0] = 0;
    for (int i=1; i<n+1; i++) {
        altitude[i] = altitude[i-1] + gain[i-1];
    }
    for (int i=0; i< n+1; i++) {
        maxaltitude = max(maxaltitude, altitude[i]);
    }
    return maxaltitude;
}
int main() {
    vector<int> gain = {-5,1,5,0,-7};
    int k = largestAltitude(gain);
    cout<<k<<endl;
    return 0;
}