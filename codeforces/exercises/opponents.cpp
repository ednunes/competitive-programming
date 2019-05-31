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
  int n, d;
  cin >> n >> d;
  char c;
  int x = 0, count = 0, ma = 0;

  REP(i, 0, d - 1) {
    x = 0;
    REP(j, 0, n - 1) {
      cin >> c;
      if (c == '1')
        x++;
    }

    if (x != n) {
      count++;
      ma = max(ma, count);
    } else
      count = 0;
  }

  cout << ma << endl;

  return 0;
}
