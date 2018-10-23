#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n, x, mi, ma; cin >> n;
    map<long long, long long> k;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(i==0) ma = mi = x;
        ma = max(ma, x);
        mi = min(mi, x);
        k[x]++;
    }
    long long r = ma==mi ? k[ma]*(k[ma]-1)/2 : k[ma] * k[mi];
    cout << ma - mi << " " << r << "\n";

    return 0;
}
