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
    int n, m, x = 0, y = 0; cin >> n >> m;
    char c;

    REP(i,1,n){
        REP(j,1,m){
            cin >> c;
            if(c=='*'){
                x = x ^ i;
                y = y ^ j;
            }
        }
    }

    cout << x << " " << y << endl;

    return 0;
}
