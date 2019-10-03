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
  int n, m, x, g = 0;
  cin >> n >> m;
  queue<int> qt;
  vector<int> v(n);
  REP(i, 0, n - 1) cin >> v[i];
  REP(j, 0, m - 1) {
    cin >> x;
    qt.push(x);
  }
  REP(k, 0, n - 1) {
    if (qt.size() > 0 and qt.front() >= v[k]) {
      qt.pop();
      g++;
    }
  }

  cout << g << endl;

  return 0;
}
