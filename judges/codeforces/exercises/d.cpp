#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define what_is(x) cerr << #x << " is " << x << endl
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"


using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
	IOS;
    int m, s, ss = 0; cin >> m >> s;
    vector<int> v;
    if((m*9 >= s) and (pow(10,m-1) <= s)){
    for(int i = pow(10,m-1); i < pow(10,m)-1; i++){
            int k = i;
            for(int j = 0; j < m; j++){
                ss += (k%10);
                k = k/10;
            }
            if(ss == s)
                v.push_back(i);
            ss = 0;
        }
        cout << v[0] << " " << v[v.size()-1] << endl;
    }
    else{
        cout << "-1 -1" << endl;
    }

	


    return 0;
}
