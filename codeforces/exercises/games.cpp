#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    pair<int, int> p;
    vector<pair<int, int> >v;
    for(int i = 0; i < n; ++i){
        cin >> p.first >> p.second;
        v.push_back(p);
    }
    int c = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(v[i].first==v[j].second)
                c++;
        }
    }
    cout << c << "\n";
    return 0;
}
