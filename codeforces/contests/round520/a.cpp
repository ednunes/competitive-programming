#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
using ii = pair<int, int>;

int main(){
    ll n, x; cin >> n; 
    vector<ll> v;
    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
    }
    ll c = 0, a = 0, ma = 0;
    for(int i = 0; i < n-1; ++i){
        if(v[i+1] == (v[i]+1)) c++;
        else {
            ma = max(ma, c) - a;
            c = 0; a = 0;
        }
        if(c>0 and v[0]!=1 and v[n-1]!=1000) a = 1;
    }
    ma = max(ma, c) - a;
    cout << ma << endl;

    return 0;
}
