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
    ll a,b,c; cin >> a >> b >> c;
    ll r = (c*2) + min(a,b)*2 + (max(a,b)-min(a,b) > 0);
    cout << r << endl;

	


    return 0;
}
