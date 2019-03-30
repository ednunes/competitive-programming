#include<bits/stdc++.h>

using namespace std;

int main(){
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> v;
    while(n--){
        int a, b; cin >> a >> b;
        pair<int, int> p(a,b);
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    for(int i = 0, size = v.size(); i < size; i++){
        //cout << v[i].first << endl;
        if(s>v[i].first) {
            s+=v[i].second;
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" <<endl;
    return 0;
}
