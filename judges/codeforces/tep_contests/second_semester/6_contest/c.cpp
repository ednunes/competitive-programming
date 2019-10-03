#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define what_is(x) cerr << #x << " is " << x << endl
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"


using namespace std;
using ll = long long;
using ii = pair<int, int>;

bool ss(ii & x, ii & y){
    if(x.first != y.first)
        return x.first > y.first;
    else return (x.second < y.second);
}

int main(){
    IOS;
    int n, c, d;
    cin >> n >> c;
    vector<ii> v, vv(n);
    map<ii, int> mp;

    REP(i,1,n){
        cin >> vv[i-1].second >> vv[i-1].first;
        mp[vv[i-1]] = i;
    }

    sort(vv.begin(), vv.end(), ss);
    int f = 0;
    for(auto & x : vv){
        f = c - x.first;
        if(f >= 0) {
            c = f;
            v.push_back(x);
        }
    }

    cout << v.size() << endl;

    for(auto & r : v) cout << mp[r] << " ";

    return 0;
}
