#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x, y; cin >> n;

    if(n%2==0) { x = 4; y = n - x; }
    else { x = 9; y = n - x; }

    cout << x << " " << y << "\n";
    return 0;
}
