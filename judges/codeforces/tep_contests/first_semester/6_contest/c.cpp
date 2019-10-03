#include<bits/stdc++.h>

using namespace std;

int main(){
    string s, x="";
    cin >> s;
    for(int i = 0, size = s.size(); i < size; i++){
        s[i] = tolower(s[i]);
        if( s[i]!='y' and s[i]!='a' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='u'){
            cout <<"."<< s[i];
        }
    }
    cout << endl;
    return 0;
}
