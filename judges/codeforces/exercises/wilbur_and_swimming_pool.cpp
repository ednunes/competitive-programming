#include <bits/stdc++.h>

#define IOS                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0)
#define what_is(x) cerr << #x << " is " << x << endl
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define endl "\n"
#define MAX 1010

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main() {
  IOS;
  int n;
  cin >> n;
  ll x, y, xmax = -MAX, xmin = MAX, ymax = -MAX, ymin = MAX;

  REP(i, 1, n) {
    cin >> x >> y;
    xmax = max(x, xmax);
    xmin = min(x, xmin);
    ymax = max(y, ymax);
    ymin = min(y, ymin);
  }

  ((xmax == xmin) or (ymax == ymin))
      ? cout << -1 << endl
      : cout << (xmax - xmin) * (ymax - ymin) << endl;

  return 0;
}
