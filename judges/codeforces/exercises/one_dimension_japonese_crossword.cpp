#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x = 0, cc = 0; cin >> n;
    string s; cin >> s; 

    vector<int> v;
    for(auto c : s){
        if('B'==c) x++;
        else {
            if(x) v.push_back(x);
            x = 0;
        }
    }

    if(x) v.push_back(x);

    cout << v.size() << endl;
    for(auto vv : v) cout << vv << " "; cout << endl;

    return 0;
}
