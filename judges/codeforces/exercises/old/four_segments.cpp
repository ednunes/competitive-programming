#include <bits/stdc++.h>
using namespace std;
 
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef pair<int,ii> iii;
typedef pair<int, iii> iiii;
typedef pair<double, ii> dii;
typedef long long ll;
typedef pair<ll, ii> lii;
const int INF = 2000000000;
const double EPS = 1e-9;
#define LSOne(S) (S & (-S))
int mods(int a, int b) { return (b + (a%b)) % b; }


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int x1, x2, y1, y2, x_parallel = 0, y_parallel = 0;
    set<ii> points;
    set<iiii> duplicates;

    for (int i = 0; i < 4; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        if (duplicates.count(iiii(x1, iii(y1, ii(x2, y2))))) {
            cout << "NO\n";
            return 0;
        }
        duplicates.insert(iiii(x1, iii(y1, ii(x2, y2))));
        points.insert(ii(x1, y1));
        points.insert(ii(x2, y2));
        if (x1 == x2 && y1 != y2) x_parallel++;
        else if (x1 != x2 && y1 == y2) y_parallel++;
    }

    if (points.size() == 4 && x_parallel == 2 && y_parallel == 2) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
