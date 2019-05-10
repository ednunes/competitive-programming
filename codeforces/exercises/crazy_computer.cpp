#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
	IOS
	ll n, c; cin >> n >> c;
	vector<ll> v(n);
	ll x = 0;
	REP(i,0,n-1) cin >> v[i];
	for(ll j = n-1; j > 0; j--){
		if((v[j]-v[j-1])<=c) x++;
		else break;
	}
	cout << x+1 << endl;

    return 0;
}
