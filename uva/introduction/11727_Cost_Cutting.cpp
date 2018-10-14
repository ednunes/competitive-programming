#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, a,b,c, x;
    cin >> t;
    for(int i = 1; i <= t; ++i){
        cin >> a >> b >> c;

        if((a>b and b>c) or (c>b and b>a)) x = b;
        else if((b>a and a>c) or (c>a and a>b)) x = a;
        else x = c;
        printf("Case %d: %d\n", i, x);
    }

    return 0;
}
