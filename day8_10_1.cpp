int fib(int n) {
    int a = 0, b = 1;
    if(n == 0) return a;
    else if(n == 1) return 1;

    while(n-- > 1){
        int c = a + b;
        a = b;
        b = c;

        a %= 1000000007;
        b %= 1000000007;
    }

    return b;
}

int main(){
    int n = 100;
    int ret = fib(n);

    return 0;
}