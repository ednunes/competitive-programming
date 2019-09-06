#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define what_is(x) cerr << #x << " is " << x << endl
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"

const double EPS {1e-9}

using namespace std;
using ll = long long;

struct Point { int x, y;
    bool operator < (const Point& p) const {
        if(fabs(x - p.x) > EPS)
            return x < p.x;
        return y < p.y;
    }
};

struct Vec {
    double x, y;
    Vec(double _x, double _y) : x(_x), y(_y) {};
};

Vec to_vec(Point a, Point b) {
    return Vec(b.x - a.x, b.y - a.y);
}

double dot(Vec a, Vec b) {
    return (a.x * b.x + a.y * b.y);
}
double norm_sq(Vec v) {
    return v.x * v.x + v.y * v.y;
}

double angle(Point a, Point o, Point b){
    Vec oa = to_vec(o,a), ob = to_vec(o,b); 
    return acos(dot(oa, ob) / sqrt(norm_sq(oa)*norm_sq(ob)));
}
int main(){
    IOS;
    int n; cin >> n;
    vector<Point> p(n);
    Point o;
    o.x = 0; o.y = 0;
    double mi = 0;
    REP(i,0,n-1){
        cin >> p[i].x >> p[i].y;
    }
    sort(p.begin(), p.end());
    double r = 0;
    int k =0;
    REP(i,0,n-2-k){
        r = angle(p[i],o, p[i+1]) * (180 / acos(-1));
        mi+=r;
        //mi = max(angle(p[i],o, p[i+1]) * (180 / acos(-1)), mi*1.0);
    }
    printf("%.10lf\n", mi);

    return 0;
}
