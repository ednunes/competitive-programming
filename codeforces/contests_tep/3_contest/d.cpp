#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, j, n;
    double soma = 0;
    cin >> n;
    j = n;
    while(n--){
        cin >> x;
        soma+=x;
    }
    
    printf("%.12lf\n", soma/j);
    
    return 0;
}
