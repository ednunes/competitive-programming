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
  int a, b, da, db, draw = 0, second = 0, first = 0;
  cin >> a >> b;

  REP(i, 1, 6) {
    da = abs(a - i);
    db = abs(b - i);
    if (da == db)
      draw++;
    else if (da > db)
      second++;
    else
      first++;
  }

  cout << first << " " << draw << " " << second << endl;

  return 0;
}
