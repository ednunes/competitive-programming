#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x; scanf("%d", &n);
    vector<int> v;
    double soma = 0;
    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
        soma+=x;
    }
    sort(v.begin(), v.end());
    soma/=2;
    int c = 0;
    for(int j = n-1; j >= 0; --j){
        soma-=v[j]; c++;
        if(soma<0) break;
    }
    cout << c << endl;
    return 0;
}
