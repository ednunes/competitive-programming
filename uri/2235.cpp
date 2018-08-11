#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    bool x = false;

    if(a==b or a==c or b==c) x = true;
    else if((a-(b+c))==0 or (b-(a+c))==0 or(c-(b+a))==0) x = true;

    x ? cout << "S" << endl : cout << "N" << endl;
    return 0;
}
