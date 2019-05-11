#include <bits/stdc++.h>

using namespace std;

int main(){
    map<int, double> t;
    for(int i = 1; i < 6; ++i)
        t[1000+i] = i + 0.5;

    int n, x, p, q;
    double soma = 0;

    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &p, &q);
        soma += t[p] * q;
    }
    printf("%.2lf\n", soma);
    return 0;
}
