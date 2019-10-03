#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    set<char> st;

    for(auto c : s) st.insert(toupper(c));

    (st.size()==26) ? cout << "YES\n" : cout << "NO\n"; 

    return 0;
}
