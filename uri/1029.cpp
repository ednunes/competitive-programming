#include<bits/stdc++.h>

using namespace std;

int c = 0;

int fib(int x){
    c++;
    if(!x) return 0;
    if(x==1) return 1;
    return (fib(x-1)+fib(x-2));
}

int main(){

    int n , x; cin >> n;
    while(n--){
        cin >> x;
        printf("fib(%d) = %d calls = %d\n", x, c-1, fib(x));
        c=0;
    }

    return 0;
}
