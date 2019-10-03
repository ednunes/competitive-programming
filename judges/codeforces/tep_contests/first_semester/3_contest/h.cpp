#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i = 0, size = s.size(); i < size; ++i){
        if(s[i]=='H' or s[i]=='Q' or s[i]=='9') { cout << "YES" <<  endl; return 0; }
    }
    cout << "NO" <<  endl;
    return 0;
}
