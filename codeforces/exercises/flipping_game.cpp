#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k, x, s = 0, ma = 0; cin >> n;
	x = n;
	vector<int> v;
	while(x--){
		cin >> k; v.push_back(k);
		if(k) s++;
	}
	int one = 0;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(v[j]) one--;
			else one++;
			ma = max(s+one, ma);
		}
		one = 0;
	}

	cout << ma << endl;

	return 0;
}
