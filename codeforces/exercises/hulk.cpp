#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string s, x = "I hate", y = "I love";
    for(int i = 1; i <= n; ++i){
        (i&1) ? s += x : s += y;
        (i==n) ? s += " it\n" :  s += " that ";
    }
    cout << s;

    return 0;
}
