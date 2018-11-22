#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, h, x, k = 0; cin >> n >> h;
    while(n--){
        cin >> x;
        (x>h) ? k+=2 : k++;
    }
    cout << k << "\n";

    return 0;
}
