#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int x = 0;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if((pow(i,2)+j)==n and (pow(j,2)+i==m)) x++; 
        }
    }
    cout << x << endl;
    return 0;
}
