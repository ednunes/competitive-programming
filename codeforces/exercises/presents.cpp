#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x; cin >> n;
    vector<pair<int, int>> v;
    for(int i = 1; i <= n; ++i){
        cin >> x;
        pair<int,int> p(x,i);
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    for(auto k : v) cout << k.second << " ";
    cout << "\n";
    return 0;
}
