#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n, x = 0, y; cin >> n;
    int v[] = {100, 20, 10, 5, 1};
    for(auto i : v){
        y = n/i; x += y; n-=(y*i);
    }
    cout << x << endl;

    return 0;
}
