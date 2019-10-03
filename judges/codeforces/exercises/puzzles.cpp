#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, x;
    cin >> n >> m;
    vector<int> v;
    for(int i = 0; i < m; i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int mi = v[m-1];
    for(int i = 0; i < m - n; i++){
        x = abs(v[i+n-1]-v[i]);
        mi = min(x, mi);
    }
    cout << mi << endl;


    return 0;
}
