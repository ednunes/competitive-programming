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
	ll x, y, z; cin >> x >> y >> z;
	ll g, p, b; cin >> g >> p >> b;

	(x>g or ((g+p-x) < y) or ((g+p+b-x-y) < z)) ? cout << "NO" << endl : cout << "YES" << endl;

    return 0;
}
