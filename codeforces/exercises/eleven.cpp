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
  ll n;
  cin >> n;
  ll x = 1, y = 1, k = 1;
  vector<int> v = {1, 1};
  REP(j, 1, n) {
    while (k < j) {
      k = x + y;
      x = y;
      y = k;
    }
    if (k == j)
      cout << "O";
    else
      cout << "o";
  }
  cout << endl;

  return 0;
}
