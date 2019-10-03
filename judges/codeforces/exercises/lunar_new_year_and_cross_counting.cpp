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
  char v[n][n];

  REP(i, 0, n - 1) {
    REP(j, 0, n - 1) { cin >> v[i][j]; }
  }
  int c = 0;
  REP(i, 1, n - 2) {
    REP(j, 1, n - 2) {
      if (v[i][j] == 'X' and v[i - 1][j - 1] == 'X' and
          v[i - 1][j + 1] == 'X' and v[i + 1][j - 1] == 'X' and
          v[i + 1][j + 1] == 'X') {
        c++;
      }
    }
  }
  cout << c << endl;

  return 0;
}
