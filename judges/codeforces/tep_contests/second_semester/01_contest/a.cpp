#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, n, vel, x, y;
    cin >> a >> b >> n;

    double distancia, mi;
    for(int i = 0; i < n; i++){
        cin >> x >> y >> vel;
        distancia = sqrt(pow(x-a, 2)+pow(y-b, 2))/(vel*1.0);
        if(i == 0) mi = distancia;
        if(mi > distancia) mi = distancia;
    }

    printf("%lf\n", mi);
    return 0;
}
