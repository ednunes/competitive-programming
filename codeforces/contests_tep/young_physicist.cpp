#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n, x, z, y, soma = 0;
    long long int a = 0, b = 0, c=0;
    cin >> n;

    while(n--) {
        cin >> x >> y >> z;
        a+=x; b+=y; c+=z;
    }
    
    (a==0 && b==0 && c==0) ? cout << "YES" << endl : cout << "NO" << endl;
    
    return 0;
}
