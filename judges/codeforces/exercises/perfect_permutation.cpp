#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    if(n&1) printf("-1\n");
    else {
        for(int even = 2; even <= n; even+=2)
            cout << even << " " << even-1 << " ";
        cout << endl;
    }

    return 0;
}
