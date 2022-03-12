#include<string>
#include<iostream>

using namespace std;

string replaceSpace(string s) {
    int num = 0;
    for(auto c:s){
        if(c == ' ') ++num;
    }

    if(num == 0) return s;

    s.resize(s.size() + num * 2);

    for(int i = s.size() - 1; i >= 0; --i){
        int l = i - num * 2;
        if(s[l] == ' '){
            s[i--] = '0';
            s[i--] = '2';
            s[i] = '%';

            --num;
        }else{
            s[i] = s[l];
        }
    }

    return s;
}

int main(){
    string s = "";
    cout << replaceSpace(s) << endl;
    return 0;
}