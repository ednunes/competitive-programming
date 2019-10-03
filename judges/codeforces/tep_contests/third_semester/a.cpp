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
    string s;
	ll n, r = 0LL;
    cin >> n >> s;

	for(ll i = 0; i < n; i++)
        if(!((s[i]-'0') % 2)) r += (i + 1);

	cout << r << endl;

    return 0;
}
