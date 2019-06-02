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
    ll n, k, t, f, h = -1e9; cin >> n >> k;
    REP(i,0,n-1){
        cin >> f >> t;
        (t>k) ? h = max(f - (t - k), h) : h = max(h,f);
    }

    cout << h << endl;


	


    return 0;
}
