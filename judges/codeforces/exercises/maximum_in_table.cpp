#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int m[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i==0 or j==0) m[i][j] = 1;
            else m[i][j] = m[i-1][j] + m[i][j-1];
        }
    }
    cout << m[n-1][n-1] << endl;

    return 0;
}
