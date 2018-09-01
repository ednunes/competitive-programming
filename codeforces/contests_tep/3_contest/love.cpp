#include <bits/stdc++.h>

using namespace std;

int main(){
    int a = 0, mi = 0, m = 0, x =0, n =0;
    cin >> n;
    cin >> x;
    m = x; mi = x;
    n-=1;
    int y = 0;
    while(n--){
        cin >> x;
        if(x>m){
            m = x;
            y++;
        }
        else if(x<mi){
            mi = x;
            y++;
        }
    }
    cout << y << endl;
    return 0;
}
