#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    string ss;
    int j = 0;
    for(int i = 0; i < s.size()-1; ++i){
        j = i;
        if(s[i]==s[i+1]){
            cout << "NO" << ss << "\n";
            exit(0);
        }
    }
    cout << "YES" << "\n" << s.substr(j,j+1) << "\n";
    return 0;
}
