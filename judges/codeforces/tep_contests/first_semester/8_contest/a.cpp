#include<bits/stdc++.h>

using namespace std;

int main(){
    long long y, k, n; cin >> y >> k >> n;
    set<int> s;
    long long r = 0;
    for(int x = 1; x <= (k - y/k); x++) {
        r = y+x;
        if((r%k)==0 and r<=n) s.insert(x);
    }

    if(!s.empty()) for(auto item: s) cout << item << " ";
    else cout << "-1 ";
	cout << "\n";
    return 0;
}
