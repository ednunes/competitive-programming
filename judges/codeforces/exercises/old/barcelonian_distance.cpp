#include <bits/stdc++.h>
using namespace std;
typedef long double ll;


ll X(ll a, ll b, ll c, ll y){
    return (-c-b*y)/a;
}
ll Y(ll a, ll b, ll c, ll x){
    return ((-c-a*x)/b);
}



int main() {
    ll a,b,c;
    ll x1,y1,x2,y2,s,x3,y3,x4,y4,x5,y5,x6,y6;
    cin >>a >>b>>c;
    cin >> x1 >> y1>>x2>>y2;
    x3=x1;
    y3=Y(a,b,c,x3);
    y4=y1;
    x4=X(a,b,c,y4);
    x5=x2;
    y5=Y(a,b,c,x5);
    y6=y2;
    x6=X(a,b,c,y6);

    s=min(min(min((abs(x1-x2)+abs(y1-y2)),(abs(y1-y3)+abs(y2-y5)+sqrt((y3-y5)*(y3-y5)+(x3-x5)*(x3-x5)))),min((abs(y1-y3)+abs(x2-x6)+sqrt((y3-y6)*(y3-y6)+(x3-x6)*(x3-x6))),(abs(x1-x4)+abs(y2-y5)+sqrt((y4-y5)*(y4-y5)+(x4-x5)*(x4-x5))))   ), (abs(x1-x4)+abs(x2-x6)+sqrt((y4-y6)*(y4-y6)+(x4-x6)*(x4-x6))));
    cout <<setprecision (10)<< s;
    return 0;
}
