#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;
using mp = map<int, int>;
using vct = vector<ii>;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    queue<ii> q;
    int n, m, x, ma = 0, k = 0, l = 0; cin >> n >> m;
    REP(i,0,n-1){
        cin >> x;
        k=ceil((1.0*x)/(1.0*m));
		if(k>=ma){
			ma=k;
			l=i;
		}
    }
    cout << l + 1 << "\n";


    return 0;
}
