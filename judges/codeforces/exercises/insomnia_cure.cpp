#include<bits/stdc++.h>

using namespace std;

int main(){
    int c = 0, k, l, m, n, d; cin >> k >> l >> m >> n >> d;
    for(int i = 1; i <= d; ++i) if(i%k==0 or i%l==0 or i%m==0 or i%n==0) c++;
    cout << c << "\n";

    return 0;
}
