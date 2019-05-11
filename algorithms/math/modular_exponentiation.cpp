#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;

ll modularExponentiation(ll x, ll n, ll m) {
	ll result = 1;	

	while(n > 0) {
		if(n & 1) result = (result * x) % m;
		x = (x % m) * (x % m);
		n >>= 1; // n /= 2 
	}

	return result;	
}

ll binaryExponentiation(ll x, ll n) {
    ll result = 1;

    while(n > 0) {
        if(n & 1) result *= x;
        x *= x;
		n >>= 1; // n /= 2 
    }

    return result;
}


int main(){
    ios::sync_with_stdio(false); cin.tie(0);

	cout << binaryExponentiation(3, 11) << "\n";
	cout << modularExponentiation(2, 5, 13) << "\n";


    return 0;
}
