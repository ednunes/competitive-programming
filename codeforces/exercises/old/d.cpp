#include <bits/stdc++.h>

using namespace std;
#define IOS ios::sync_with_stdio(false)
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define pii pair<int,int>

int ask(int x){
    cout<<1<<" "<<x<<endl;
    string s;
    cin>>s;
    return s[0]=='b'?1:0;
}

int main()
{
    int n;
    cin>>n;
    int z=ask(0);
    int l=0,r=1e9;
    int low=0;
    for(int i=0;i<n-1;i++){
        int m=(l+r)>>1;
        int x=ask(m);
        if(x==z)l=m,low=m;
        else r=m;
    }
    cout<<0<<" "<<low<<" "<<2<<" "<<low+1;
    return 0;
}
