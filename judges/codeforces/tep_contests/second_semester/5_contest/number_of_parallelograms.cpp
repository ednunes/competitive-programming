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
    map<point, int> mp_mid;
    int n; cin >> n;

    vector<point> ps(n); 
    int midx = 0, midy = 0;
    ll r = 0;
    REP(i,0,n-1){
        cin >> ps[i].first >> ps[i].second;
        REP(j,0,i-1){
            midx = ps[i].first + ps[j].first;
            midy = ps[i].second + ps[j].second;
            r += mp_mid[{midx, midy}];
            mp_mid[{midx, midy}]++;
        }
    }
    cout << r << endl;


    return 0;
}
