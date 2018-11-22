#include<bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

int main(){
    int t; cin >> t;

    ll a, b, k, x = 0;
    for(int i = 0; i < t; ++i){
        cin >> a >> b >> k;
        int c = k/2; 
        x+=(a*c); x-=(b*c);
        
        if(k&1) x+=a;   
        
        cout << x << "\n";
        x = 0;
    }

    return 0;
}
