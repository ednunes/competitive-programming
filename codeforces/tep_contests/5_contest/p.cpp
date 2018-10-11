#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int d = n;
    if(!d) {
        cout << d << endl;
        return 0;
    }
    vector<int> v;
    int x = 0, c = 0;
    n=12;
    while(n--){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int k=0;
    for(int i = 0, size = v.size(); i < size; i++){
        if(d > k) {
            c++;
            k+=v[i];
        }
    }
    cout << c << endl;
    return 0;
}
