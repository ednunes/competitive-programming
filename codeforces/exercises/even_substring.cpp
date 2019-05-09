#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
	ll n, ans = 0LL; string s; cin >> n >> s;
	for(ll i = 0; i < n; i++) if((s[i]-'0')%2==0) ans += (i + 1);
	cout << ans << "\n";

    return 0;
}
