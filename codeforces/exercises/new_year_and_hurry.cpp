#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int rest = 240 - k, i = 0;

    while(i!=n){
        rest-=i*5;
        if(rest<(i+1)*5) break;
        i++;
    }
    cout << i << endl;
    return 0;
}
