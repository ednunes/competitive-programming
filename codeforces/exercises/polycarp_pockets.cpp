#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;
using mp = map<int, int>;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n, x; cin >> n;
    mp m;
    REP(i, 0, n-1) {
        cin >> x;
        ++m[x];
    }

    int ma = 0;
    for(auto k : m) ma = max(ma, k.second);
    cout << ma << "\n";

    return 0;
}
