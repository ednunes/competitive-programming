#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;
using mp = map<int, int>;
using vct = vector<int>;

mp m;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n, a, b, c, d; cin >> n;
    vct v(n);
    REP(i,0,n-1){
        cin >> a >> b >> c >> d;
        v[i] = a+b+c+d;
    }
    int first = v[0];
    sort(v.begin(), v.end(), greater<int>());
    REP(j,0,n-1) if(v[j]==first) {  cout << j+1 << "\n"; break; }

    return 0;
}
