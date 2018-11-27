#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, x = 0, y = 0; cin >> a >> b;
    int soma = a;

    do {
        x = a/b; y = a%b;
        soma += x;
        a = x+y;
    } while(a/b>=1);

    cout << soma << endl;

    return 0;
}
