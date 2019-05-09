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
	char c1, c2;
	string s; cin >> s;

	int l,r;
	while(m--) {
		cin >> l >> r >> c1 >> c2;
		for(int i = l-1; i < r; i++){
			if(s[i] == c1) s[i] = c2;
		} 
	}

	cout << s << endl;

    return 0;
}
