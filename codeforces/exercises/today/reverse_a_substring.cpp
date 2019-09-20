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
  string s;
  cin >> s;

  for (int i = n - 1; i >= 0; i--) {
    if (s[i] - 'a' < s[i - 1] - 'a') {
      cout << "YES" << endl << i << " " << i + 1 << endl;
      return 0;
    }
  }
  cout << "NO" << endl;

  return 0;
}
