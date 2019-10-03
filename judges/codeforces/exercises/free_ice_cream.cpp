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
	ll n,x; cin >> n >> x;

	char c; 
	ll p, dis = 0;
	while(n--){
		cin >> c >> p;
		if(c=='+') x+=p;
		else {
			if(x-p < 0) dis++; 
			else x-=p;
		}
	}

	cout << x << " " << dis << endl;

    return 0;
}
