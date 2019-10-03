#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<string> v;
    string s;
    bool b = false;

    for(int i = 0; i < n; i++){
        cin >> s; v.push_back(s);
        if(s[0]=='O' and s[1]=='O' and !b) { b=true; v[i][0]='+'; v[i][1]='+'; }
        else if(s[3]=='O' and s[4]=='O' and !b) { b=true; v[i][3]='+'; v[i][4]='+'; }
    }
    if(b) {
        cout << "YES" << endl;
        for(auto ss : v) cout << ss << endl;
    }
    else  cout << "NO" << endl;

    return 0;
}
