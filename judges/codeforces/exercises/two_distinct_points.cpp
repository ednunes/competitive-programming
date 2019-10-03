#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
	IOS
	int t;
	cin >> t;
	while(t--) {
		int l1, r1, l2, r2;
		cin >> l1 >> r1 >> l2 >> r2;
		vector<int>a({l1, r1, l2, r2});
		int ans1 = 0, ans2 = 0;
		for (auto it : a) for (auto jt : a) {
			if (l1 <= it && it <= r1 && l2 <= jt && jt <= r2 && it != jt) {
				ans1 = it;
				ans2 = jt;
				break;
			}
		}
		cout << ans1 << " " << ans2 << endl;
	}

    return 0;
}
