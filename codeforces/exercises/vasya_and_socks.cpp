#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int x = n + abs((n-1)/(m-1));
    cout << x << "\n";
    return 0;
}
