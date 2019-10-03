#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, v[105], soma = 0; cin >> n;
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(&v[0], &v[n]);
    for(int j = 0; j < n; j++) soma += v[n-1]-v[j];
    cout << soma <<endl;

    return 0;
}
