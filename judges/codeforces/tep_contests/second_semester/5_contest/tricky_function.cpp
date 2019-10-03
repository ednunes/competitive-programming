#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define what_is(x) cerr << #x << " is " << x << endl
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"


using namespace std;
using ii = pair<int, int>;
using ll = long long;

int g(int i, int j, vector<int> a) {
    int sum = 0;
    for (int k = min(i, j) + 1; k <= max(i, j); k = k + 1)
        sum = sum + a[k];
    return sum;
}

int main(){
	IOS;
    int n; cin >> n;
    vector<int> a(n);
    REP(i,0,n-1) {
        cin >> a[i];
    }

    int gg = 0, k = 0 , r = 1e6, f = 0;
    int j = 1;
    REP(i,0,n-1){
                gg = g(i,j,a);
                gg = gg*gg; 
                k = (i-j);
                k = k*k;
                f = k + gg;
                r = min(f, r);
                j = i + 1;
    }
    cout << r << endl;

    return 0;
}
