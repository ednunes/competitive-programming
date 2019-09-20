#include <bits/stdc++.h>

#define IOS                                                                    \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0)
#define what_is(x) cerr << #x << " is " << x << endl
#define REP(i, a, b) for (int i = a; i < b; i++)
#define endl "\n"

using namespace std;
using ii = pair<int, int>;
using ll = long long;

int main() {
  IOS;
  string s, t;
  cin >> s >> t;

  int x = 0, size = min(s.size(), t.size()) - 1;
  for (int i = size, j = size; i >= 0, j >= 0; i--, j--) {
    x += (s[s.size() - x - 1] == t[t.size() - x - 1]);
  }

  cout << ((s.size() + t.size()) - 2 * x) << endl;

  return 0;
}
