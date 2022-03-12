#include<vector>

using namespace std;

int missingNumber(vector<int>& nums) {
    int l = 0, r = nums.size() - 1;
    while(l <= r){
        int m = l + (r - l) / 2;
        if(nums[m] > m){
            r = m - 1;
        }else{
            l = m + 1;
        }
    }

    return r + 1;
}

int main(){
    // vector<int> a = {5,7,7,8,8,10};
    vector<int> a = {1,2,3};
    int ret = missingNumber(a);
    return 0;
}