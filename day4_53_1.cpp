#include<vector>

using namespace std;

int search(vector<int>& nums, int target) {
    int n = nums.size();
    int l = 0, r = n - 1;
    int _l = -1, _r = -2;
    while(l <= r){
        int m = l + (r - l) / 2;
        if(nums[m] > target){
            r = m - 1;
        }else if(nums[m] < target){
            l = m + 1;
        }else{
            _l = m;
            r = m - 1;
        }
    }
    
    l = 0, r = n - 1;
    while(l <= r){
        int m = l + (r - l) / 2;
        if(nums[m] > target){
            r = m - 1;
        }else if(nums[m] < target){
            l = m + 1;
        }else{
            _r = m;
            l = m + 1;
        }
    }

    return max(_r - _l + 1, 0);
}

int main(){
    // vector<int> a = {5,7,7,8,8,10};
    vector<int> a = {};
    int target = 7;
    int ret = search(a, target);
    return 0;
}