#include<bits/stdc++.h>

using namespace std;

vector<int> v = {0,1,2,3,4,5,6,7};

int bs(int x){
    int l = 0, r = v.size()-1;

    while(l<=r){
        int m = floor((l+r)/2);
        printf("M: %d - L: %d - R: %d\n", m, l, r);
        if(v[m]<x) l = m + 1;
        else if(v[m]>x) r = m - 1;
        else return m;
    }
    
    return -1;
}

int main(){
    int x = 1; cin >> x;
    int k = bs(x);
    (k>=0) ? cout << "Achou! Está na posicao: " << k << "\n" : cout << "Não achou\n";

    return 0;
}
