#include<string>
#include<iostream>
#include<algorithm>

using namespace std;

string reverseLeftWords(string s, int n) {
    reverse(s.begin() + 0, s.begin() + n);
    reverse(s.begin() + n, s.end());
    reverse(s.begin(), s.end());

    return s;
}

int main(){
    string s = "lrloseumgh";
    int n = 6;
    cout << reverseLeftWords(s, n) << endl;
    return 0;
}