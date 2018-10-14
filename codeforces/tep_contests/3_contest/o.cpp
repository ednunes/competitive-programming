#include <bits/stdc++.h>

using namespace std;

int main(){
    int n , k , l , c , d , p , nl , np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int a = (c*d);
    int b = (k*l)/nl;
    int x = p/np;
    int m = min(a, b);
    m = min(m,x);
    cout << m/n << endl;

    return 0;
}
