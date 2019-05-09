#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
	IOS
	int n, ab, x, y, a = 0, aa = 0, bb = 0 ,b = 0; cin >> n;
	while(n--){
		cin >> ab >> x >> y;
		if(ab==1) { aa++; a+=x; }
		else { bb++; b+=x; }
	}

	(a>=(aa*10)/2.0) ? cout << "LIVE" << endl : cout << "DEAD" <<endl;
	(b>=(bb*10)/2.0) ? cout << "LIVE" << endl : cout << "DEAD" <<endl;

    return 0;
}
