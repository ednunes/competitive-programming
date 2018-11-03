#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int x, k, c = 0; cin >> x;
    int n = 6;
    while(n--, n){
        k = x/n;
        if(k && x>0){ c += k; x -= n*c; }
    }
    cout << c << "\n";
    return 0;
}
