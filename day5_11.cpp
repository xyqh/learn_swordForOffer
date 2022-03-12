#include<vector>
// #include<algorithm>
#include<limits.h>

using namespace std;

int minArray(vector<int>& numbers) {
    int l = 0, r = numbers.size() - 1;
    while(l < r){
        int m = l + (r - l) / 2;
        if(numbers[m] < numbers[r]){
            r = m;
        }else if(numbers[m] > numbers[r]){
            l = m + 1;
        }else{
            --r;
        }
    }
    return numbers[l];
}

int main(){
    vector<int> a = {3,4,5,1,2};
    int ret = minArray(a);
    return 0;
}