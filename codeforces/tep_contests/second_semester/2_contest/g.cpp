#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;
using mp = map<int, int>;
using vct = vector<int>;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int v[4][4];
    char c;
    REP(i,0,3){
        REP(j,0,3){
            cin >> c;
            if(c=='.') v[i][j] = 0;
            else v[i][j] = 1;
        }
    }
    REP(i,0,2){
        REP(j,0,2){
            int x = v[i][j]+v[i+1][j]+v[i][j+1]+v[i+1][j+1];
            if(x+1==4 or x==4 or x==0 or x-1==0){
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";


    return 0;
}
