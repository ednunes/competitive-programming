#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
using ii = pair<int, int>;

int main(){
    ll n; cin >> n; 
    ll v[1000];
    for(int i = 0; i < n; ++i) cin >> v[i];
    ll c = 0, a = 0, ma = 0;
    for(int i = 0; i < n-1; ++i){
        if(v[i+1] == (v[i]+1)) c++;
        else { c = 0; a = 1; }
        ma = max(ma, c-a);
    }
    cout << ma << endl;

    return 0;
}
