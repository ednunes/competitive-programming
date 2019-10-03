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
  ll n, r = 10e9, c = 0, x = 0;
  string s, g = "ACTG";
  cin >> n >> s;

  for (int i = 0; i <= n - 4; i++) {
    for (int j = 0; j < 4; j++) {
      x = abs(s[i + j] - g[j]);
      c += min(x, 26 - x);
    }
    r = min(r, c);
    c = 0;
  }

  cout << r << endl;

  return 0;
}
