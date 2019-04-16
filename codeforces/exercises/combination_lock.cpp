#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
	int n, a, b, soma = 0, r; cin >> n;
	int x, y;
	string s,ss; cin >> s >> ss;

	REP(i, 0, n-1){
		a = s[i]-48; b = ss[i]-48;
		soma+=min(abs(a-b), 10-abs(a-b));
	}
	cout << soma << endl;


    return 0;
}
