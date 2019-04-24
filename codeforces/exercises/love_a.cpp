#include<bits/stdc++.h>

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
	string s; cin >> s;
	int a = 0, x = 0;
	for(auto c : s){
		if(c=='a') a++; else x++;
	}

	if(a>x){
		cout << a + x << endl;
	} else {
		cout << (x+a)-(x-a+1) << endl;
	}

    return 0;
}
