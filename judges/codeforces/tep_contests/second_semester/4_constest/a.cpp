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
    ll r, x1, y1, x2, y2; cin >> r >> x1 >> y1 >> x2 >> y2;

    double res = hypot(x2-x1, y2-y1);

    cout << r - res << endl;

	


    return 0;
}
