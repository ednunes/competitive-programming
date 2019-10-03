#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int x, y, c = 0, m = 0;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(x>y) m++;
        else if(x<y) c++;
    }

    if(m==c) cout << "Friendship is magic!^^" << endl;
    else (c>m) ? cout << "Chris" << endl : cout << "Mishka" << endl;

    return 0;
}
