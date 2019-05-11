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
	int n, sum = 0; cin >> n;
	vector<ii> v(n);
	REP(i,0,n-1) { cin >> v[i].first; v[i].second = i + 1; } 

	sort(v.begin(), v.end());

	REP(j, 0, (n/2)-1){
		cout << v[j].second << " " << v[n-j-1].second << endl; 
	}

    return 0;
}
