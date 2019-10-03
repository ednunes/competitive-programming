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
  ll n;
  cin >> n;
  ll x = (n & 1) ? (pow(n, 2) + 1) / 2 : pow(n, 2) / 2;
  cout << x << endl;
  REP(i, 1, n) {
    REP(j, 1, n) {
      if ((i & 1 and j & 1) or (i % 2 == 0 and j % 2 == 0))
        cout << "C";
      else
        cout << ".";
    }
    cout << endl;
  }

  return 0;
}
