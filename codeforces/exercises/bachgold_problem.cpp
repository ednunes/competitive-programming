#include<bits/stdc++.h>

using namespace std;

vector<int> ps;

int main(){
    int n, last = 0, c = 0, x = 2; cin >> n;
    vector<int> v;
    while(n>last){
        if(last+3==n) { x = 3; }
        last+=x;
        v.push_back(x);
        c++;
    }

    cout << c << endl;
    for(auto x : v) cout << x << " ";
    cout << endl;

    return 0;
}
