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
  string s;
  cin >> s;
  bool b = true;

  string vowels = "aeiou";

  if (vowels.find(s.back()) == string::npos and s.back() != 'n') {
    b = false;
  } else {
    REP(i, 1, s.size() - 1) {
      if ((s[i - 1] != 'n') and (vowels.find(s[i - 1]) == std::string::npos) and
          (vowels.find(s[i]) == std::string::npos)) {
        b = false;
      }
    }
  }

  cout << (b ? "YES" : "NO") << endl;

  return 0;
}
