#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, y, a = 0, b = 0, z=0;

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x >> y;
        if(x==0) a++;
        if(y==0) b++;
    }
    (abs(a-n)<a) ? z+=abs(a-n) : z+=a;
    (abs(b-n)<b) ? z+=abs(b-n) : z+=b;

    cout << z << endl;

    return 0;
}
