#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n, mi, ma, ll;
    long long x = -1;
    vector<long long> v;

    cin >> n;
    for(int  i = 1; i <= n; i++){
        long long a, b, c; cin >> a >> b;
        if(b>a) swap(a,b);
        c = a - b;
        if(i==1){ ma = a; mi = b; ll = c;}
        if(a>=ma and b<=mi and c>0 and c >= ll){
            ma = a; mi = b; ll = c;
            x = i;
        }
        printf("\n%lli %lli - %lli %lli - %lli %lli - %lli\n", a, ma, b, mi, c, ll, x);
    }
    cout << x << endl;
    
    return 0;
}
