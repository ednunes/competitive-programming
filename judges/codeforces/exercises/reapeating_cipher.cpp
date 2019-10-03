#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	string s; cin >> s;
	int k = 1;

	for(int i = 0; i < n; i+=k){
		cout << s[i];
		k++; 
	}
	cout << "\n";

	return 0;
}
