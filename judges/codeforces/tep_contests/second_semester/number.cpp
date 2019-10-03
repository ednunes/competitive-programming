#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define what_is(x) cerr << #x << " is " << x << endl
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"


using namespace std;
using point = pair<int, int>;
using ll = long long;

int main(){
	IOS;
    map<point, ll> mp_mid;
    ll r = 0;

    int n; cin >> n;
    vector<point> p(n);

    int midx, midy;
    REP(i,0,n-1){
        cin >> p[i].first >> p[i].second; 

        REP(j,0,i-1){
            midx = p[i].first + p[j].first;
            midy = p[i].second + p[j].second;

            r += mp_mid[{midx, midy}];
            mp_mid[{midx, midy}]++;
        }
    }
    cout << r << endl;

    return 0;
}
