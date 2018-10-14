#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, n, y = 0;

    cin >> n >> x;
    
    int m = x, mi = x;
    n--;

    while(n--){
        cin >> x;
        if(x > m){
            m = x;
            y++;
        }
        else if(x < mi){
            mi = x;
            y++;
        }
    }

    cout << y << endl;
    return 0;
}
