#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y, m = 0, n, t=0;
    cin >> n;
    while(n--){
        cin >> x >> y;
        t-=x;
        t+=y;
        m=max(m,t);
    }
    cout << m << endl;
    
    
    return 0;
}
