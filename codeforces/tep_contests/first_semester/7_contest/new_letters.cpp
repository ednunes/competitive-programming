#include<bits/stdc++.h>

using namespace std;

int main(){
    char c;
    map<char, int> m;
    while(scanf("%c", &c), c!='\n') ++m[c];

    string s;
    getline(cin, s);
    int size = s.size(), k = 0, b = 0;

    for(int i = 0; i < size; ++i){
        if(s[i]==' ') b++;
        else if(m.find(s[i])!=m.end() && m[s[i]]>0 ){
            ++k;
            --m[s[i]];
        }
    }
    
    (size!=(k+b)) ? cout << "NO" << "\n" : cout << "YES" << "\n";

    return 0;
}
