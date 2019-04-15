#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;
using vi = vector<int>;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n, x; cin >> n;
    vi a,b,c;
    REP(i,1,n){
        cin >> x;
        if(x==1) a.push_back(i);
        else if(x==2) b.push_back(i);
        else c.push_back(i);
    }
    int mi = min(min(a.size(),b.size()), c.size());
    printf("%d\n", mi);
    if(mi){
        REP(j,0,mi-1){
            printf("%d %d %d\n", a[j], b[j], c[j]);
        }
    }

    return 0;
}
