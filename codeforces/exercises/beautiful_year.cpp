#include<bits/stdc++.h>

using namespace std;

int main(){
    int s; cin >> s;
    string y;
    for(int i = s+1; i <= 9012; ++i){
        y = to_string(i);
        if(y[0]!=y[1] and y[0]!=y[2] and y[0]!=y[3] and y[1]!=y[2] and y[1]!=y[3] and y[2]!=y[3]){
            cout << i << "\n";
            break;
        }
    }

    return 0;
}
