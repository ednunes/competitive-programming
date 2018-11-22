#include <bits/stdc++.h>
using namespace std;
vector<int>pos[26];
int main(){
    int n; cin >> n;
	string s;
	cin >> s;
	for(int i=0;i<s.length();i++){
		pos[s[i]-'a'].push_back(i);
	}
	for(int i=25;i>=0;i--){
		reverse(pos[i].begin(),pos[i].end());
	}
	string ans="";
	for(int itr=0;itr<26;itr++){
		int place=-1;
		for(int c=0;c<26;c++){
			if(pos[c].empty()) continue;
			bool ok=1;
			for(int i=0;i<26;i++){
				if(pos[i].size()>0){
					if(pos[i][0]<pos[c].back()){
						ok=0;
						break;
					}
				}
			}
			if(ok){
				place=c;
				break;
			}
		}
		if(place==-1) break;
		int ind=pos[place].back();
		ans=ans+char(place+'a');
		pos[place].clear();
		for(int i=0;i<26;i++){
			while(pos[i].size()>0 and pos[i].back()<ind) pos[i].pop_back();
		}
	}
	cout<<ans << endl;
}

