//Majority Number using Boyer-Moore Algorithm
#include <iostream>
using namespace std;
void majorityNum(int nums[],int n) {
    int candidate = 0;
    int count = 0;
    for (int i=0; i<n; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        if (candidate == nums[i]) {
            count++;
        } else {
            count--;
        }
    }
    cout<<candidate<<endl;;
}
int main() {
    int nums[8] = {2,2,1,1,1,2,2,2};
    int n =8;
    majorityNum(nums, n);
    int nums2[8] = {3,2,3,1};
    majorityNum(nums2, 4);
    return 0;
}