#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
	IOS
	ll x, y, r = 1; cin >> x >> y;
	REP(i, 2, min(x,y)) r*=i;
	cout << r << endl;

    return 0;
}
