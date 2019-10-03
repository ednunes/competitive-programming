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
  int n;
  cin >> n;
  string s, r;
  cin >> s;

  REP(i, 1, n - 1) {
    if (s[i - 1] != s[i]) {
      r = s[i - 1];
      r += s[i];
      break;
    }
  }

  cout << (r.size() ? "YES" : "NO") << endl;
  cout << r << endl;

  return 0;
}
