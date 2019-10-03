#include<bits/stdc++.h>
using namespace std;
#define N 1005
#define ll long long
ll n,m;
struct lisa {
	ll x;
	ll y;
} boy[N*N],girl,shit;
int main() {
	scanf("%lld%lld",&n,&m);
	scanf("%lld%lld",&girl.x,&girl.y);
	for(ll i=0; i<n; i++)
		scanf("%lld%lld",&boy[i].x,&boy[i].y);
	m%=(2*n);
	for(ll i=0; i<m; i++) {
		shit.x=boy[i%n].x*2-girl.x;
		shit.y=boy[i%n].y*2-girl.y;
		girl.x=shit.x;
		girl.y=shit.y;
	}
	printf("%lld %lld",girl.x,girl.y);
}
