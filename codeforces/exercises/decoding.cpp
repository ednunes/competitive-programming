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
  string s, ss;
  cin >> ss;
  REP(i, 0, n - 1) {
    char c = ss[i];
    if (n & 1) {
      s = ((i & 1) ? c + s : s + c);
    } else {
      s = ((i & 1) ? s + c : c + s);
    }
  }

  cout << s << endl;

  return 0;
}
