#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
	ll n, m, x; cin >> n >> m;
	ll odd = 0, even = 0, od = 0, ev = 0;
	while(n--)  { cin >> x; if(x&1) odd++; else even++; }
	while(m--)  { cin >> x; if(x&1) od++; else ev++; }

	cout << min(odd,ev) + min(od, even) << endl;

    return 0;
}
