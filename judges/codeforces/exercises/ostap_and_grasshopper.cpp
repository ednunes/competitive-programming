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
  int n, k, g = 0, t = 0;
  cin >> n >> k;
  string s;
  cin >> s;

  REP(i, 0, n - 1) {
    if (s[i] == 'G')
      g = i;
    else if (s[i] == 'T')
      t = i;
  }
  bool b = false;
  if (g < t) {
    for (int i = g; i <= t; i += k) {
      if (s[i] == 'T') {
        b = true;
        break;
      } else if (s[i] == '#') {
        break;
      }
    }
  } else {
    for (int i = g; i >= t; i -= k) {
      if (s[i] == 'T') {
        b = true;
        break;
      } else if (s[i] == '#') {
        break;
      }
    }
  }
  cout << (b ? "YES" : "NO") << endl;

  return 0;
}
