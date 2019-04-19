#include<bits/stdc++.h>

using namespace std;
int main(){
	int n, x; cin >> n;
	bool b = false;

	vector<int> v;

	cin >> x; v.push_back(x);

	for(int i = 1; i < n; i++){
		cin >> x; v.push_back(x);
		if(v[i]<v[i-1]){ b = true; }
	}
	if(!b) cout << n << endl;
	else {
		int k = n/2, xx = k, w = n;
		while(k!=1){
			cout << xx << " " << k << endl;
			vector<int> vv(v.begin(), v.end()-xx);
			vector<int> vvv(v.begin()+xx, v.end());
			if(is_sorted(vv.begin(), vv.end())) { cout << vv.size() << endl; return 0;}
			else if(is_sorted(vv.begin(), vv.end())) { cout << vvv.size() << endl; return 0;}
			for(auto oi : vv) cout << oi << " ";
			cout << endl;
			for(auto o : vvv) cout << o << " ";
			cout << endl;
			xx += k/2;
			k/=2;
		}
		cout << "1" << endl;
	}
	return 0;
}
