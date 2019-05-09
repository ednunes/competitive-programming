#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;
using mp = map<int, int>;
using vct = vector<int>;

mp m;
vct v;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    ll a, b, c; cin >> a >> b >> c;
    cout << min(min(2LL*(a+b), a+b+c), 2LL*(min(a,b)+c)) << "\n";
    return 0;
}
