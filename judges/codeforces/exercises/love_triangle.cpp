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
    int n; cin >> n;
    int f[n];
    REP(i,0,n-1) cin >> f[i]; 
    REP(i,0,n-1) {
        if (f[f[f[i]-1]-1] == i + 1){ cout << "YES" << endl; return 0; } 
    }
    cout << "NO" << endl;
    return 0;
}
