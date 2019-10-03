#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b; cin >> a >> b;

    int m = min(a,b);
    a-=m; b-=m; int soma = a + b; soma/=2;
    cout << m << " " << soma << endl;

    return 0;
}
