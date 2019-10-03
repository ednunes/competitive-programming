#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n, x = 0, y = 0; cin >> n;
    char c;

    while(n--){
        cin >> c;
        c=='D' ? x++ : y++;
    }
    if(x!=y) (x>y)?cout << "Danik\n" : cout << "Anton\n";
    else cout << "Friendship\n";

    return 0;
}
