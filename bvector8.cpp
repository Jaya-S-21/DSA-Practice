 //Set- Mismatch
 #include <iostream>
 #include <vector>
 using namespace std;
 vector<int> setmismatch(vector<int> arr) {
    int duplicate=-1, mising=-1;
    for(int i=1; i<= arr.size(); i++) {
        int count =0;
        for (int j=0; j< arr.size(); j++) {
            if(arr[j] == i) {
                count++;
            }
        }
        if (count == 2) {
            duplicate = i;
        }
        if (count == 0) {
            mising = i;
        }
    }
    return {duplicate, mising};
 }
 int main() {
    vector<int> nums = {1,2,4,2};
    vector<int> ans = setmismatch(nums);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
 }