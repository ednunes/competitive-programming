#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
using ii = pair<int, int>;

int main(){
    int n; cin >> n;
    string s, x; cin >> s;
    int value, ma = s[0];
    bool k = true;
    for(int i = n-1; i > 0; --i){
        bool o = s[i] > s[i-1] ;
        cout << o << s[i] << " " << s[i-1] << endl;
        if(s[i]<s[i-1] and k){
            cout << s[i] << endl;
            k = false;
            i--;
            continue;
        }
        x+=s[i];
    }
    bool b = lexicographical_compare(x.begin(),x.end(),s.begin(),s.end());

    b ? cout << x << endl : cout << s << endl;

    return 0;
}
