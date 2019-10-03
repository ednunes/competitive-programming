#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll n; cin >> n; n--; 
    string s, aux; cin >> aux;
    int soma = 1;
    while(n--){
        cin >> s;
        if(s!=aux){
            soma++;
            aux = s;
        }
    }

    cout << soma << "\n";

    return 0;
}
