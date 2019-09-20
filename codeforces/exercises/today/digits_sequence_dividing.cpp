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
  int q, n;
  string s, r, x;
  ll a, b;
  cin >> q;

  while (q--) {
    cin >> n >> s;
    a = (s[0] - '0');
    b = (s[1] - '0');

    for (int i = 0; i < n; i++) {
      if (a < b) {
        r += a + " ";
        x = " ";
      } else {
        x += b;
      }
    }
  }

  return 0;
}
