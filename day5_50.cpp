#include<vector>
#include<string>
#include<limits.h>

using namespace std;

char firstUniqChar(string s) {
    int help[26];
    for(auto c:s){
        ++help[c - 'a'];
    }

    for(auto c:s){
        if(help[c - 'a'] == 1)
            return c;
    }

    return ' ';
}

int main(){
    return 0;
}