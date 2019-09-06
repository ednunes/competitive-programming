#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define what_is(x) cerr << #x << " is " << x << endl
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"


using namespace std;
using ii = pair<int, int>;
using ll = long long;

#define xmax 40000LL
#define ymax 20000LL

int main(){
	IOS;
    ll n; cin >> n;
    ll t; string s, last;
    ll y = ymax;
    bool b = true;
    while(n--){
        cin >> t >> s;
        if((y == ymax and s!="South") or (y == 0 and s!="North")) { b = false; }

        if(s == "South"){
            y -= t;
            if(y < 0) b = false;
        }
        else if(s == "North"){
            y += t;
            if(y > ymax) b = false;
        }
    }
    ((y==ymax) and b) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}
