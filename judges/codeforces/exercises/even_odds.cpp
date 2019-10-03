#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll n, k;
    cin >> n >> k;
    (k <= (n+1)/2) ? cout << 2*k - 1 << endl : cout << 2*(k-(n+1)/2) << endl;
    return 0;
}
