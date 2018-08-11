#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, c;
    scanf("%d", &n);

    pair<int, double> p;
    double x;

    scanf("%d %lf", &c, &x);
    p.first = c;
    p.second = x;
    n-=1;

    while(n--){
        scanf("%d %lf", &c, &x);
        if(p.second<x){
            p.first = c;
            p.second = x;
        }
    }
    (p.second >= 8) ? cout << p.first << endl : cout << "Minimum note not reached" << endl;

    return 0;
}
