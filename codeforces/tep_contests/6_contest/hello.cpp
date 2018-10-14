#include<bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    string h = "hello";
    int x = 0, size_h = h.size();

    for(int i = 0, size = s.size();  i < size; i++)
        if(h[x]==s[i]) x++;
    
    (x == 5) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}
