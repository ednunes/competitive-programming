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
  string s, t, v = "aeiou";
  cin >> s >> t;
  bool b = true, x = false, y = false;
  if (s.size() != t.size())
    b = false;
  else {
    REP(i, 0, s.size() - 1) {
      (v.find(s[i]) != string::npos) ? x = true : x = false;
      (v.find(t[i]) != string::npos) ? y = true : y = false;
      if (x != y) {
        b = false;
        break;
      }
    }
  }

  cout << (b ? "YES" : "NO") << endl;

  return 0;
}
