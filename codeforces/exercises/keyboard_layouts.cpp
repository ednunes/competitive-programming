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
  map<char, char> mp;
  string s, t, ss;
  cin >> s >> t >> ss;
  REP(i, 0, s.size() - 1) mp[s[i]] = t[i];
  for (auto c : ss) {
    if (islower(c))
      cout << mp[c];
    else if (isdigit(c))
      cout << c;
    else
      cout << char(toupper(mp[tolower(c)]));
  }
  cout << endl;

  return 0;
}
