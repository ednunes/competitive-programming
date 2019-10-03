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

	ll n,x1,x2;
	cin>>n>>x1>>x2;
	pair<ll,ll> P[n];
	ll k,b,i;
	for(i=0;i<n;i++)
	{
		cin>>k>>b;
		P[i]=make_pair(k*x1+b,k*x2+b);
	}
	sort(P,P+n); bool flag=true;
	for(i=1;i<n;i++){
		if(P[i].second<P[i-1].second){
			flag=false;
		}
	}
	cout<<(flag?"NO":"YES");
	


    return 0;
}
