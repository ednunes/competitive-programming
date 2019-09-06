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
    int n, k; char c;
    cin >> n >> k;
    vector<int> v(k, 0);

    for(int i = 0; i < n; i++){
        cin >> c;
        v[c - 'A']++;
    }

    int mi = n;
    for (auto x : v) mi = min(x, mi);

    cout << mi * k << endl;


    return 0;
}
