#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxm = 261;
const int maxn = 1000010;
int n, m;
int x[maxm], y[maxm];
int val[maxn];
inline void chkmax(int& a, int b){
	if(a < b) a = b;
}
int main(){
	scanf("%d%d", &n, &m);
	for(int i = 0; i < m; i++)
		scanf("%d%d", &x[i], &y[i]);
	for(int i = 1; i <= n; i++)
		val[i] = 1;
	for(int i = 0; i < m; i++)
		for(int j = i + 1; j < m; j++){
			int x1 = x[j] - x[i], y1 = y[j] - y[i];
			int cnt = 0;
			for(int k = 0; k < m; k++){
				int x2 = x[k] - x[i], y2 = y[k] - y[i];
				ll tmp = (ll)x1 * y2 - (ll)x2 * y1;
				if(tmp) continue;
				cnt++;
			}
			if(y1 == 0) continue;
			if((ll)x1 * y[i] % y1) continue;
			ll thex;
			if(x1 == 0)
				thex = x[i];
			else
				thex = (ll)x[i] - (ll)x1 * y[i] / y1;
			if(thex > n || thex < 1) continue;
			chkmax(val[thex], cnt);
		}
	ll ans = 0;
	for(int i = 1; i <= n; i++)
		ans += val[i];
	printf("%lld\n", ans);
	return 0;
}
