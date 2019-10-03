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
  ll x1, x2, x3, y1, y2, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  ll det =
      ((x1 * y2) + (x3 * y1) + (x2 * y3) - ((x3 * y2) + (x1 * y3) + (x2 * y1)));

  if (!det)
    cout << "TOWARDS" << endl;
  else {
    (det > 0) ? cout << "LEFT" << endl : cout << "RIGHT" << endl;
  }

  return 0;
}
