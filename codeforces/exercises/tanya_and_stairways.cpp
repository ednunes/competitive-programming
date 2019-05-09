#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;
using mp = map<int, int>;
using vct = vector<int>;

mp m;
vct v;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n, x, last = 1; cin >> n;

    REP(i, 0, n-1){
        cin >> x; 
        if(x == 1 and i!=0) v.push_back(last);
        last = x;
    }

    v.push_back(last);

    cout << v.size() << "\n";
    for(auto k : v) cout << k << " ";
    cout << "\n";

    return 0;
}
