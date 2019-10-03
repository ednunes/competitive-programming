#include<bits/stdc++.h>

using namespace std;


int h(int a, int b, int c){
    int hi = 0;
    hi = max(hi, a+(b*c));
    hi = max(hi, (a+b)*c);
    hi = max(hi, (a+b+c));
    hi = max(hi, a*(b+c));
    hi = max(hi, (a*b)+c);
    hi = max(hi, a*b*c);

    return hi;
}

int main(){
    int a, b, c; cin >> a >> b >> c;
    cout << h(a,b,c) << "\n";
    return 0;
}
