#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int x;
    vector<int> v;
    for(int i = 0, size = s.size(); i < size; i++){
        if(i%2==0) {x = (int)s[i] - 48;
        v.push_back(x);}
    }
    sort(v.begin(), v.end());
    
    for(int x = 0, ss = v.size(); x < ss; x++){
        cout << v[x];
        if(x!=ss-1) cout << '+';
    }
    cout << endl;
    
    
    return 0;
}
