#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;    
    if(n>0) cout << n << endl;
    else {
        long long x = ((n/100)*10) + n%10, y = n/10;
        cout << max(x,y) <<endl;
    }
    return 0;
}
