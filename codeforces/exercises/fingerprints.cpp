#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
	IOS
	int n, m; cin >> n >> m;
	vector<int> v(n), vv(m);

	REP(i,0,n-1) cin >> v[i];
	REP(j,0,m-1) cin >> vv[j];

	REP(k,0, n-1){
		REP(l,0,m-1){
			if(v[k] == vv[l]) {
				cout << v[k] << " ";
				break;
			} 
		}
	}

	cout << endl;

    return 0;
}
