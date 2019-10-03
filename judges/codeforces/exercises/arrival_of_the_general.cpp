#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x; cin >> n;
    cin >> x;
    pair<int, int> ma(x,0), mi(x,0);
    for(int i = 1; i < n; ++i){
        cin >> x;
        if(x>ma.first){
            ma.first = x;
            ma.second = i;
        }
        if(x<=mi.first){
            mi.first = x;
            mi.second = i;
        }
    }
    n--;
    int r = ma.second + abs(mi.second - n);
    ma.second>mi.second ? cout << r -1 << "\n" : cout << r << "\n";

    return 0;
}
