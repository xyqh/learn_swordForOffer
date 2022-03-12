#include<vector>
#include<limits.h>

using namespace std;

bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
    int n = matrix.size() - 1;
    if(n < 0) return false;
    int m = matrix[0].size() - 1;

    int _n = 0, _m = m;
    while(_n >= 0 && _m >= 0 && _n <= n && _m <= m){
        if(matrix[_n][_m] == target){
            return true;
        }else if(matrix[_n][_m] < target){
            ++_n;
        }else{
            --_m;
        }
    }

    return false;
}

int main(){
    return 0;
}