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
	ll n; cin >> n;
	vector<ll> v(n);
	REP(i,0,n-1) cin >> v[i];

	ll dima = 0, sereja = 0; 

	ll first = 0, last = n-1, value = 0;
	REP(i,1,n){
		if(v[first] > v[last]){
			value = v[first];
			first++;
		}
		else {
			value = v[last];
			last--;
		}
	
		(i&1) ? sereja+=value : dima+=value;
	}

	cout << sereja << " " << dima << endl;;
	


    return 0;
}
