#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define what_is(x) cerr << #x << " is " << x << endl
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"


using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
	IOS;
    ll x, y, n, m; cin >> x >> y >> m;
    cin >> n;

    double ma = 0 ,a, b;

    REP(i,0,n-1) {
        cin >> a >> b;
        ma = max(ceil(hypot(a-x, b-y)), ma);
    }
    ll mm = ma;

    (mm <= m) ? cout << mm << endl : cout << -1 << endl;

	


    return 0;
}
