#include<bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<ll, int>;
vector<ii> v;
vector<ll> vi;

int main(){
    ll n, x, soma = 0; cin >> n;
    map<ll,ll> m;
    ii y;
    for(int i = 0; i < n; ++i){
        cin >> x;
        y.first = x;
        y.second = i;
        v.push_back(y);
        soma+=x;
        m[x]++;
    }
    ll u;
    sort(v.begin(), v.end());
    for(int i = 0; i < n; ++i){
        cout << v[i].first << endl;
        if(m[soma-v[i].first]>0) {
            vi.push_back(i+1);
            break;
        }
    }

    cout << vi.size() << "\n";
    for(auto o : vi) cout << o << " ";
    cout << "\n";

    return 0;
}
