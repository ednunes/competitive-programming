#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, b; cin >> s >> b;
    bool t = true;
    for(int i = 0, size = s.size(); i < size; i++){
        if(b[i]==s[size-i]) {
            t = false;
            break;
        }
    }
    
    
    if(b.size()!=s.size()) t = false;
    (t) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}
