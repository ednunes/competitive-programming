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
	int h1,h2,m1,m2,r, x;
	while(cin >> h1 >> m1 >> h2 >> m2, h1 or h2 or m1 or m2){
		m1 = (h1) ? h1*60+m1 : 24*60+m1;
		m2 = (h2) ? h2*60+m2 : 24*60+m2;
		(m1>m2) ? cout << 1440 - (m1 - m2) << endl : cout << m2 - m1 << endl;
	}
    return 0;
}
