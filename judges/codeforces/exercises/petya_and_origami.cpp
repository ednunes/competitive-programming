#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
	IOS
	ll n, k; cin >> n >> k;
	ll r = 2, g = 5, b = 8;
	ll x = ((r*n)+k-1)/k;
	x+=((g*n)+k-1)/k;
	x+=((b*n)+k-1)/k;
	cout << x << endl;
	


    return 0;
}
