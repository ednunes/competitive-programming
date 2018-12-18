#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    
    for(int i = 0; i < k; ++i) (n%10) ? n-- : n/=10;

    cout << n << "\n";
    return 0;
}
