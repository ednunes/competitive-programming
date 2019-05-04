#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
	vector<int> v(3); cin >> v[0] >> v[1] >> v[2];
	sort(v.begin(), v.end());
	cout << max(0, v[2]-v[0]-v[1]+1) << "\n";
    return 0;
}
