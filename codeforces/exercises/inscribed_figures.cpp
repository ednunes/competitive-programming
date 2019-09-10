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
  int n, x, s = 0;
  bool b = true;
  cin >> n;
  vector<int> v(n);
  REP(i, 0, n - 1) cin >> v[i];
  REP(i, 0, n - 2) {
    if ((v[i] == 2 and v[i + 1] == 3) or (v[i] == 3 and v[i + 1] == 2)) {
      b = false;
      break;
    }
    if ((v[i] == 1 and v[i + 1] == 2) or (v[i] == 2 and v[i + 1] == 1))
      s += 3;
    if ((v[i] == 1 and v[i + 1] == 3) or (v[i] == 3 and v[i + 1] == 1))
      s += 4;
    if (v[i] == 3 and v[i + 1] == 1 and v[i + 2] == 2)
      s--;
  }

  if (b) {
    cout << "Finite" << endl;
    cout << s << endl;

  } else {
    cout << "Infinite" << endl;
  }

  return 0;
}
