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
    int a, b, c, d; cin >> a >> b >> c >> d;

    int x = min(a,min(d,c));
    cout << x*256 + min(a-x, b)*32 << "\n";

    return 0;
}
