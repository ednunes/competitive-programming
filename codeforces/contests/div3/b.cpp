#include<bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;



int main(){
    bool v[105];
    int n, k = 0; cin >> n;

    for(int i = 0; i < n; ++i) cin >> v[i];

    for(int i = 1; i < n-1; ++i){
        if(v[i-1] == 1 && v[i+1] == 1 && v[i]==0){
            v[i+1] = !v[i+1];
            k++;
        }
    }

    //for(int j = 0; j < n; ++j) cout << v[j] << " ";
    cout << k << endl;
    return 0;
}
