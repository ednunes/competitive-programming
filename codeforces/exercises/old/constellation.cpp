#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define what_is(x) cerr << #x << " is " << x << endl
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"


using namespace std;
using ii = pair<int, int>;
using ll = long long;
struct link{
	long long x,y,z;
};
int cmp(link a,link b){
	if(a.x==b.x)return a.y<b.y;
	return a.x<b.x;
}
int main(){
	IOS;
    int n,i;
	link a[100005];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lld %lld",&a[i].x,&a[i].y);a[i].z=i+1;
	}
	sort(a,a+n,cmp);
	for(i=2;i<n;i++){
		if((a[0].x-a[i].x)*(a[1].y-a[i].y)!=(a[0].y-a[i].y)*(a[1].x-a[i].x)){
			printf("%lld %lld %lld",a[0].z,a[1].z,a[i].z);return 0;
		}
	}

	


    return 0;
}
