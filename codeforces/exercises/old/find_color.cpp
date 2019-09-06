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
    ll x,y;
    cin>>x>>y;

    ll tot = x * x + y * y;

    ll c = 0;

    while(c *c < tot) c ++;

    if(x == 0 || y == 0 || c * c == tot){
        cout<<"black"<<endl;
    }else{
        if(x * y > 0){
            if(c & 1){
                cout<<"black";
            }else{
                cout<<"white";
            }
        }else{
            if(c & 1){
                cout<<"white";
            }else{
                cout<<"black";
            }

        }
    }




    return 0;
}
