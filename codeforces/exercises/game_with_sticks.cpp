#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    (n==1 or m==1 or min(n,m)%2!=0) ? cout << "Akshat\n" :  cout << "Malvika\n";
    return 0;
}
