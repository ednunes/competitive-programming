#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
	int n; cin >> n;
	vector<int> v(n);
	REP(i,0,n-1) cin >> v[i];

	sort(v.begin(), v.end());

	cout << v[((n-1)/2)] << "\n";

    return 0;
}
