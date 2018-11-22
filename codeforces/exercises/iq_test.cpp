#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, par = 0, imp = 0, x, li, lp; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x%2==0) {
            par++;
            lp = i;
        }
        else {
            imp++;
            li = i;
        }
    }

    (imp<par) ? cout << li+1 << "\n" : cout << lp+1 << "\n";

    return 0;
}
