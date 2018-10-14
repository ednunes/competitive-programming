#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int k, m, n, x, y;

    while(cin >> k && k){
        cin >> m >> n;
        while(k--){
            cin >> x >> y;
            if(m == x || n == y)
                puts("divisa");
            else if(m > x && n > y)
                puts("SO");
            else if(m < x && n > y)
                puts("SE");
            else if(m < x && n < y)
                puts("NE");
            else
                puts("NO");
        }
    }
    return 0;
}
