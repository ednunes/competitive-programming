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

    int n,g,t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        g=__gcd(n,180);
        int k=n/g;
        n=180/g;
        if(k==n-1){n*=2;}cout<<n<<endl;
    }

    return 0;
}
