#include<bits/stdc++.h>

using namespace std;
int main(){
    unsigned long long int t, s ,a, b, c;
    cin >> t;

    while(t--){
        cin >> s >> a >> b >> c;
        unsigned long long int x = s/c;
        unsigned long long int y = x + (x/a)*b;
        cout << y << endl;
    }

    return 0;
}
