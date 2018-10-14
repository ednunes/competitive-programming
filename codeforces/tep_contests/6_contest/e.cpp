#include<bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin >> x;
    for(int i = 0, size = (x*2)+1; i < size; i++){
        for(int j = 0, size = (x*2)+1; j < size; j++){
            if(i==3 and i==j) cout << x;
            else cout << x;
            ((x*2)==j) ? cout << endl : cout << " ";
        }
    }
    return 0;
}
