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
    string s, x;
    cin >> s;

    for(auto c : s){
        char cc = tolower(c);
        if(cc!='a' and cc!='e' and cc != 'i' and cc !='o' and cc !='u' and cc != 'y'){
            x+='.';
            x+=cc;
        }
    }
    cout << x << endl;

	


    return 0;
}
