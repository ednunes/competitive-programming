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
  int n, old;
  cin >> n;
  string s;
  bool b = true;
  while (n--) {
    map<char, int> mp;
    cin >> s;

    sort(s.begin(), s.end());

    REP(i, 1, s.size() - 1) {
      mp[s[i]]++;

      if ((mp[s[i]] > 1) or ((s[i] - s[i - 1]) != 1)) {
        b = false;
        break;
      }
    }

    cout << (b ? "Yes" : "No") << endl;
    b = true;
  }

  return 0;
}
