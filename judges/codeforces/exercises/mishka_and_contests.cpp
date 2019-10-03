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
  int n, k, c = 0;
  cin >> n >> k;

  vector<int> v(n);
  REP(i, 0, n - 1) cin >> v[i];
  for (int i = 0; i < n; i++) {
    if (v[i] <= k)
      c++;
    else
      break;
  }
  for (int i = n - 1; i >= 0 and c != n; i--) {
    if (v[i] <= k)
      c++;
    else
      break;
  }

  cout << c << endl;

  return 0;
}
