#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string, int> m;
    m["Tetrahedron"] = 4;
    m["Cube"] = 6;
    m["Octahedron"] = 8;
    m["Dodecahedron"] = 12;
    m["Icosahedron"] = 20;

    long long n, soma = 0; cin >> n;
    string s;
    while(n--){
        cin >> s; soma += m[s];
    }
    cout << soma << endl;

    return 0;
}
