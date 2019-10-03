#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int calc(int w, int h) { return ((w+h)*2 - 4); }

int main(){
	IOS
	int w, h, k, soma = 0; cin >> w >> h >> k;
	
	while(k--) { soma += calc(w - 4*k, h - 4*k); }

	cout << soma << endl;

    return 0;
}
