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
  ll q, n, a, b, x, y;
  cin >> q;
  while (q--) {
    cin >> n >> a >> b;
    cout << (n / 2) * min(2 * a, b) + (n % 2) * a << endl;
  }

  return 0;
}
