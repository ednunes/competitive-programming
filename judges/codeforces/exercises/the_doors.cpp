#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
	IOS
	int n,x, l = 0, r = 0; cin >> n;
	REP(i,0,n-1){
		cin >> x;
		x ? r = i : l = i;
	}
	cout << min(r,l)+1 << endl;


    return 0;
}
