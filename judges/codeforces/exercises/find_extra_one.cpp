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
  int n, x, y, pos = 0, neg = 0;
  cin >> n;
  while (n--) {
    cin >> x >> y;
    (x > 0) ? ++pos : ++neg;
  }

  (pos <= 1 or neg <= 1) ? cout << "YES" << endl : cout << "NO" << endl;

  return 0;
}
