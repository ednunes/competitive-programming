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
    int n = 0, x = 0; string s; cin >> n >> s;
    map<char, int> mp;
 
    for(auto c : s) { if (mp[c] > 0) ++x; mp[c]++; }
 
    (x >= 26) ? cout << "-1\n" : cout << n - x << endl;
 
    return 0;
}
