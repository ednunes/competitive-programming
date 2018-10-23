#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int q = 0, x;
    vector<int> v;
    while(n--){
        cin >> x;
        v.push_back(x);
    }
    
    for(auto y : v)
        if(y>=v[k-1] and y>0) q++;

    cout << q << "\n";

    return 0;
}
