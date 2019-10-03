#include <bits/stdc++.h>
#define ll long long
#define f(i, a, b) for(ll i = a; i <= b; ++i)
#define ff(i, a, b) for(ll i = a; i < b; ++i)
#define F(i, a, b) for(ll i = a; i >= b; --i)
#define FF(i, a, b) for(ll i = a; i > b; --i)
#define x first
#define y second
using namespace std;
typedef pair<ll, ll> ii;

const double _PI = 3.141592653589793;
double n, m, k, ans = 0;

signed main(){
	scanf("%lf %lf %lf", &n, &m, &k);
	ans += ((n*n*sqrt(3))/4)*(sqrt(n*n*2/3))/3;
	ans += (m*m)/3*(sqrt(m*m/2));
	double S = (k*k*5)/(4*tan(_PI/5)), r = S/(2.5*k);
	ans += S * sqrt(3*k*k/4 - r*r)/3;
	printf("%0.12lf", ans);
}
