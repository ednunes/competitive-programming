#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
	int n, x, r = 0; cin >> n;
	vector<int> v(n);
	map<int,int> m;

	REP(i,0,n-1){
		cin >> x;
		m[x] = i;
	}

	for(auto const &it : m) if(it.second) { v[it.second] = it.first; r++; } 
	cout << r << endl;
	for(auto k : v) if(k) cout << k << " ";

	cout << endl;


    return 0;
}
