#include<bits/stdc++.h>

using namespace std;

map<char, int> m;
int w = 0, x = 0;

void le(string s) for(auto c : s) { m[c]++; w++; } 

int main(){
    string a,b,c; cin >> a >> b >> c;

    le(a); le(b);
    
    for(auto k : c) if(m[k]>0){ x++; m[k]--; }

    (x==w and w==(c.size())) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}
