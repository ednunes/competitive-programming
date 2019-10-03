#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
	IOS
	int n; cin >> n;
	string s;
	set<string> ss;

	REP(i,0,n-1) {
		cin >> s; 
		if(ss.insert(s).second) cout <<"NO"<< endl;
		else cout << "YES" << endl;
	}

    return 0;
}
