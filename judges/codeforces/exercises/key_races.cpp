#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
	int s; cin >> s;
	int v1, v2, t1, t2; cin >> v1 >> v2 >> t1 >> t2;
	int r1 = v1*s + 2*t1, r2 = v2*s + 2*t2;
	if(r1==r2) cout << "Friendship\n";
	else if(r1<r2) cout << "First\n";
	else cout << "Second\n";


    return 0;
}
