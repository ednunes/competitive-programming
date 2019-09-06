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
    int n,t; cin >> n >> t;
    string s;
    cin >> s;
        for(int j = 0; j < t; j++){
    for(int i = 0; i < n; i++){
            if(s[i]=='B' and s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout << s << endl;

	


    return 0;
}
