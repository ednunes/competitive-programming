#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, y, z, a = 0;
    cin >> n;
    while(n--){
        cin >> x >> y >> z;
        ((x+y+z)>=2) ? a++ : a+=0;
    }
    cout << a << endl;
    return 0;
}
