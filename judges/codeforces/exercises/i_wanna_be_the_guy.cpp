#include<bits/stdc++.h>

using namespace std;
set<int> st;

void read(){
    int x, y;
    cin >> x;
    while(x--){
        cin >> y;
        st.insert(y);
    }
}

int main(){
    int n; cin >> n;
    read(); read();
    (st.size()==n) ? cout << "I become the guy.\n" : cout << "Oh, my keyboard!\n";

    return 0;
}
