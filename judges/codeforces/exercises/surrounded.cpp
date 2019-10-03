#include <bits/stdc++.h>

#define IOS                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0)
#define what_is(x) cerr << #x << " is " << x << endl
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define endl "\n"

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main() {
  IOS;
  double x, y, r, x1, y1, r1, resp = 0;
  cin >> x >> y >> r >> x1 >> y1 >> r1;

  double dist = hypot(x1 - x, y1 - y);

  if (dist > r + r1)
    resp = dist - abs(r + r1);
  if (dist > abs(r - r1))
    resp = abs(r - r1) - dist;

  printf("%.15lf\n", resp / 2.0);

  return 0;
}
