#include<bits/stdc++.h>

using namespace std;

int main(){
    int k, r, x; cin >> k >> r;
    for(int i = 1; ; i++){
        if(k*i%10==0 or ((k*i-r)%10==0)) { x = i; break; }
    }
    cout << x << endl;
    return 0;
}
