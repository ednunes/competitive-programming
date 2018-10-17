#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    cin >> n;
    while(n--){
        cin >> x;
        int a = 2015-x;
        (a>0) ? cout << a << " D.C." << endl : cout << abs(a-1) << " A.C." << endl;
    }
    return 0;
}
