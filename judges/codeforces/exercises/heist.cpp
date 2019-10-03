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
    ll n, x;
    cin >> n;
    ll mn = 1e9, mx = 0;

    REP(i,0,n-1) {
        cin >> x;
        mn = min(x, mn);
        mx = max(x, mx);
    }

    ll r = max(0LL, ((mx-mn)-n+1LL));
    cout << r << endl;


    return 0;
}
