#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    long long x, y, ma = 0, c = 0;
    cin >> x;
    for(int i = 0; i < n-1; ++i){
        cin >> y;
        (x<=y) ? c++ : c = 0;
        ma = max(c,ma);
        x = y;
    }
    cout << ma+1 << endl;
    return 0;
}
