#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);
    if((n * m * 2)%k != 0){
        printf("NO\n");
        return 0;
    }
    ll result = (n * m * 2) / k;
    ll aux = __gcd(n, result);
    if((result / aux) <= m){
        printf("YES\n0 0\n%lld 0\n0 %lld\n", aux, (result / aux));
    }else{
        aux = __gcd(m, result);
        if((result / aux) <= n){
            printf("YES\n0 0\n%lld 0\n0 %lld\n", (result / aux), aux);
        }else printf("NO\n");
    }
    return 0;
}
