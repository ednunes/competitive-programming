#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
	map<string, string> m;

	m["purple"] = "Power";
	m["yellow"] = "Mind";
	m["orange"] = "Soul";
	m["red"] = "Reality";
	m["green"] = "Time";
	m["blue"] = "Space";

	int n; cin >> n;
	string s;
	REP(i,0,n-1) {
		cin >> s;
		m[s] = "";
	}

	cout << 6-n << "\n";
	for(auto const &k : m)
		if(k.second!="") cout << k.second << "\n";

    return 0;
}
