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
  int n, x, s = 0, mi = 0;
  cin >> n;

  REP(i, 0, n - 1) {
    cin >> x;
    s += x;
    mi = max(x, mi);
  }

  s *= 2;
  s += n;
  s /= n;

  cout << max(s, mi) << endl;

  return 0;
}
