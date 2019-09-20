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
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  int v[m][5] = {};
  vector<int> p(m);

  REP(i, 0, n - 1) cin >> s[i];
  REP(j, 0, m - 1) cin >> p[j];

  REP(j, 0, m - 1) { REP(i, 0, n - 1) v[j][s[i][j] - 'A']++; }

  int ma = 0, soma = 0;

  REP(i, 0, m - 1) {
    REP(j, 0, 4) ma = max(v[i][j], ma);
    soma += ma * p[i];
    ma = 0;
  }

  cout << soma << endl;

  return 0;
}
