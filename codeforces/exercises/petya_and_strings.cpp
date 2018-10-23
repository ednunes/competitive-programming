#include<bits/stdc++.h>

using namespace std;

int main(){
    string a, b;
    char c;
    while(scanf("%c", &c), c!='\n') a+=tolower(c);
    while(scanf("%c", &c), c!='\n') b+=tolower(c);
    if(a==b) cout << 0 << "\n";
    else (a<b) ? cout << -1 << "\n" : cout << 1 << "\n";
    return 0;
}
