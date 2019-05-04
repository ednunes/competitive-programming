#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
	int n, x = 0, r = 0; cin >> n;
	char c;

	REP(i,0,n-1) {
		cin >> c;
		if(c=='x') {
			x++;
			if(x>2) r++;
		}
		else x = 0;
	}

	cout << r << "\n";

    return 0;
}
