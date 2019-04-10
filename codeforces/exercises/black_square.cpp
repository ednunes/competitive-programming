#include<bits/stdc++.h>

using namespace std;

int main(){
    int v[4], soma = 0; cin >> v[0] >> v[1] >> v[2] >> v[3];
    string s; cin >> s;
    for(auto x : s) soma += v[x-49];
    cout << soma << endl;
    return 0;
}
