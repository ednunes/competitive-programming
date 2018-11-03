#include<bits/stdc++.h>

using namespace std;

int main(){
    long long k, n, w, r = 0; cin >> k >> n >> w; 
    for(int i = 1; i <= w; ++i) r += i*k;
    (r>n) ? cout << r-n << "\n" : cout << 0 << "\n";
    return 0;
}
