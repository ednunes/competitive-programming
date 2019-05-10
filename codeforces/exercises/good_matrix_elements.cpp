#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
	IOS
	int n, soma = 0, x; cin >> n;
	int k = (n/2 + 1);
	REP(i,1,n){
		REP(j,1,n){
			cin >> x;
			soma += x*(i==j or (n-i+1)==j or i == k or j == k);
		}
	}
	cout << soma << endl;
	


    return 0;
}
