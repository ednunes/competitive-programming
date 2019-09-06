#include<bits/stdc++.h>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define what_is(x) cerr << #x << " is " << x << endl
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define endl "\n"


using namespace std;
using ll = long long;
using point = pair<ll, ll>;

bool are_parallel(Line l, Line k) {
    return (fabs(l.a - k.a) < EPS) and (fabs(l.b - k.b) < EPS);
}

bool are_same(Line l, Line k) {
    return are_parallel(l, k) and (fabs(l.c - k.c) < EPS);
}

template<typename T>
struct Line {
    T a, b, c;
    Line(T av, T bv, T cv) : a(av), b(bv), c(cv) {}
    Line(const Point& p, const Point& q) : a(p.y - q.y), b(q.x - p.x), c(p.x * q.y - q.x * p.y) {}
};

int main(){
    IOS;
    int n; cin >> n;
    vector<point> v(n);
    point p;
    REP(i,1,n){
        cin >> p.second; 
        p.first = i;
        vector.push_back(p);
    }

    REP(i,0,n-2){
        Line l(v[i], v[i+1]);

    }




    return 0;
}
