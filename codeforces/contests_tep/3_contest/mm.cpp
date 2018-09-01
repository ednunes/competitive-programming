#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x = 0;
    string s;
    cin >> n;

    while(n--){
        cin >> s;
        (s[0] == '+' or s[s.size()-1]=='+') ? x++ : x--;
    }
    cout << x << endl;
    
    
    return 0;
}
