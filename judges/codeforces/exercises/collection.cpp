#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    long long x, rep = 0; vector<long long> v;

    for(int i = 0; i < n; i++){
        cin >> x; v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int j = 0; j < v.size()-1; j++){
        if(v[j]==v[j+1]) rep++;
    }

    cout << rep << endl;

    return 0;
}
