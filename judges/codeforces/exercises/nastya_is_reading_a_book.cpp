#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;
using mp = map<int, int>;
using vct = vector<ii>;

mp m;
vct v;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    ii p;
    REP(i,0,n-1){
        cin >> p.first >> p.second;
        v.push_back(p);
    }

    int k; cin >> k;

    REP(j,0,n-1){
        if(v[j].first <= k && v[j].second >= k){
           cout << v.size() - j << endl;
           break;
        }
    }

    return 0;
}
