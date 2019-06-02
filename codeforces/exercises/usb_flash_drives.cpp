#include <bits/stdc++.h>

#define IOS                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0)
#define what_is(x) cerr << #x << " is " << x << endl
#define REP(i, a, b) for (long long i = a; i <= b; i++)
#define endl "\n"

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main() {
  IOS;
  ll n, m;
  cin >> n >> m;
  ll v[n];
  for (auto &x : v)
    cin >> x;

  sort(v, v + n);

  for (ll i = n - 1; i >= 0; i--) {
    m -= v[i];
    if (m < 1LL) {
      cout << n - i << endl;
      return 0;
    }
  }

  return 0;
}
