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
using ss = pair<string, string>;
using ll = long long;

int main() {
  IOS;
  string x, y;
  ss p;
  cin >> x >> y;
  int n;
  cin >> n;
  cout << x << " " << y << endl;
  REP(i, 0, n - 1) {
    cin >> p.first >> p.second;
    (p.first == x) ? x = p.second : y = p.second;
    cout << x << " " << y << endl;
  }

  return 0;
}
