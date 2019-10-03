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
  int x, y, z;
  cin >> x >> y >> z;

  double a = sqrt((x * z) / (y * 1.0));

  cout << ceil(4 * (a + x / a + y / a)) << endl;

  return 0;
}
