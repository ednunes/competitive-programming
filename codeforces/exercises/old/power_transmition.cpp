#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e3 + 14;
const double inf = 1e99;
int n, ans, x[maxn], y[maxn];
map<double, set<double> > ms;
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x[i] >> y[i];
		for(int j = 0; j < i; j++)
			if(x[j] == x[i])
				ms[inf].insert(x[i]);
			else{
				double m = (y[i] - y[j]) / double(x[i] - x[j]);
				ms[m].insert(y[i] - x[i] * (y[i] - y[j]) / double(x[i] - x[j]));
			}
	}
	int cnt = 0;
	ll ans = 0;
	for(auto [a, s] : ms){
		ans += (ll) s.size() * cnt;
		cnt += s.size();
	}
	cout << ans << '\n';
}

