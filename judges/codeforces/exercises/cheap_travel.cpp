#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    (m*a<=b) ? cout << n*a << endl : cout << (n/m)*b + min((n%m)*a, b) << endl;
    return 0;
}
