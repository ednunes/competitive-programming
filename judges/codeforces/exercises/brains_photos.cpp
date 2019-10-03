#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m; cin >> n >> m;
	int y = n*m;
	char a;
	while(y--){
		cin >> a;
		if(a!='W' && a!='B' && a!='G'){ cout << "#Color\n"; return 0; }
	}

	cout << "#Black&White\n";

	return 0;
}
