#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, soma = 0, i = 1; cin >> n;

    while(n>i+soma){
        n -= i + soma; soma+=i;
        if(n>i+soma) i++;
    }
    cout << i << endl;    

    return 0;
}
