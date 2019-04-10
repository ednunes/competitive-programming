#include<bits/stdc++.h>

using namespace std;
// 4,9,25,49,121,169,289,361,529,841,961,1369,1681,1849,2209,2809,3481,3721,4489,5041,5329,6241,6889,7921,9409,10201,10609,11449,11881,12769,16129,17161,18769,19321,22201,22801,24649,26569,27889,29929,32041,32761,36481,37249,38809,39601,44521,49729,51529,52441,54289,57121,58081,63001,66049,69169,72361,73441,76729,78961,80089,85849,94249,96721,97969,
set<long long> v;
long long last = 4;

bool resolve(long long x){
    long long c = 0, b = false;
    if(x%2==0) return b;
    for(int i = 1; i <= x; i+=2){
        if(x%i==0) c++;
        if(c>3) break;
    }
    if(c==3) {v.insert(x); b = true; last = x;}

    return b;
}

int main(){
    long long n, x; cin >> n;
    while(n--){
        //cin >> x;
        for(int i = 10e4; i < 10e5; i++){
            resolve(i);
            // ? cout << "YES" << endl : cout << "NO" << endl;
        }
    }
    for(auto oi : v) cout << oi << ",";
        cout << endl;

    return 0;
}
