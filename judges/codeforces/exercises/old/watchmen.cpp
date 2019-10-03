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
    map<int, int> m,mm;
    map<pair<int,int>, int> mp;
    long long n = 0,ans = 0,x = 0,y= 0;

    cin>>n;
	while(n--)
	{
		cin>>x>>y;
		ans+=m[x]+mm[y]-mp[{x,y}];
		m[x]++;
		mm[y]++;
		mp[{x,y}]++;
	}
	cout<<ans << endl;
    return 0;
}
