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
  int n, m, x, y;
  cin >> n >> m;
  set<int> st;

  REP(i, 0, n - 1) {
    cin >> x;
    REP(j, 0, x - 1) {
      cin >> y;
      st.insert(y);
    }
  }
  (int(st.size()) == m) ? cout << "YES\n" : cout << "NO\n";

  return 0;
}
