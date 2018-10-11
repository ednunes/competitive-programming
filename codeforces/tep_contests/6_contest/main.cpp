#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int x=1, y =1;
    bool b = false;
    for(int i = 0, size = s.size(); i < size; i++){
        if(x==7 or y==7) b = true;
        if(s[i]=='1' and s[i+1]=='1') x++;
        else x = 1;
        if(s[i]=='0' and s[i+1]=='0') y++;
        else y = 1;
    }
    (b) ? cout << "YES" << endl : cout << "NO" << endl;  
    return 0;
}
