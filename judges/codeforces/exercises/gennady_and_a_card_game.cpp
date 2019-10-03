#include<bits/stdc++.h>

using namespace std;

int main(){
    string s, x; cin >> s;
    for(int i = 0; i < 5; i++){
        cin >> x;
        if(x[0]==s[0] or x[0]==s[1] or x[1]==s[0] or x[1]==s[1]){
            cout << "YES" << endl; return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
