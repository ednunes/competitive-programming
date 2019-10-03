#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x; cin >> n;
    
    while(n--){
        cin >> x;
        if(x) { cout << "HARD\n"; return 0; }
    }
    cout << "EASY\n";

    return 0;
}
