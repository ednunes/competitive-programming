#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m; cin >> n >> m;
	int mi;
	(n%2) ? mi = (n/2) + 1 : mi = n/2;

	for(int i = mi; i <= n; i++){
		if(i%m==0) { 
			cout << i << "\n";
			return 0;
		}
	}

	cout << -1 << "\n";


	return 0;
}
