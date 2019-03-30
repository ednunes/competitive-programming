#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, x, y;
    cin >> s >> x;
    
    for(int i = 0, size = s.size(); i < size; i++)
    {
        ((s[i]=='0' and x[i] == '1') or (s[i]=='1' and x[i] == '0')) ? y+='1' : y+='0';
    }
    cout << y << endl;
    
    return 0;
}
