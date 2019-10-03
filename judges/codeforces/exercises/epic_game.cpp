#include<bits/stdc++.h>

using namespace std;
long long gcd(long long a, long long b)
{
    return b ? gcd(b, a % b) : a;
}

int main(){
    int a, b, n, x = 0; cin >> a >> b >> n;
    bool turn = false;

    while(n>0){
        (!turn) ? x = gcd(a,n) : x = gcd(b,n); 
        n-=x;
        turn=!turn;
    }

    cout << !turn <<endl;

    return 0;
}
