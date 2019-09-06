#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define ld long double
#define PI 3.14159265358979324
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vii vector<pii>
#define vll vector<pll>
#define vi vector<int>
#define vl vector<ll>
#define frs first
#define snd second
#define pb push_back
#define sz size
#define X real()
#define Y imag()
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
const ll oo = 1e18;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int r, h;
    cin>>r>>h;
    int ans = (h/r);
    double x =  sqrt(3)*((double)r)/2.0  ;
    if( x +  r + (ans*r) <= h+r){
        ans=(ans*2)+3;
    }else if(h-(r*ans) >= ((double)r)/2.0){
        ans=(ans*2)+2;
    }else{
        ans=(ans*2)+1;
    }
    cout<<ans<<endl;
    return 0;
}
