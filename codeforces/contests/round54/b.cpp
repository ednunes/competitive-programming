#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
using ii = pair<int, int>;


bool is_prime3(int n)
{
    if (n < 2)
        return false;

    if (n == 2)
        return true;

    if (n % 2 == 0)
        return false;

    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0)
            return false;

    return true;
}

int main(){
    ll n, x = 0; cin >> n;

    bool k = is_prime3(n);
    if(!k){
        while(n>0){
            for(int i = 2; i <= n; i++){
                bool b = is_prime3(i);
                if(b && n%i==0){ n = n - i; x++; break; }
            }
        }
    } else x = 1;
    cout << x << endl;
    return 0;
}
