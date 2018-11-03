#include<bits/stdc++.h>

using namespace std;

int main(){
    string s, x; cin >> s;
    bool b = false;
    for(int i = 0; i < s.size(); ++i){
        if(s[i]=='0' and !b){
            b = true;
        } 
        else x+= s[i];
    }
    if(s.size() == x.size()) x.pop_back();
    cout << x << endl;
    return 0;
}
