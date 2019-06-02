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
  string s, t;
  cin >> s >> t;
  int c = 0;
  REP(i, 0, t.size() - 1) {
    if (t[i] == s[c])
      c++;
  }
  cout << c + 1 << endl;

  return 0;
}
