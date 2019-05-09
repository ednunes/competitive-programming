#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
	IOS
	int n, c, r = 0, l = 0, x; cin >> n >> c;
	vector<int> p(n), t(n);
	REP(i,0,n-1) cin >> p[i];
	REP(j,0,n-1) cin >> t[j];
	
	int la = 0, ra = 0;
	REP(k,0,n-1){
		la += t[k];
		ra += t[n-k-1];

		l += max(0, p[k] - c*la);
		r += max(0, p[n-1-k] - c*ra);
	}


	if(l==r) cout << "Tie" << endl;
	else (l>r) ? cout << "Limak" << endl : cout << "Radewoosh" << endl;	

    return 0;
}
