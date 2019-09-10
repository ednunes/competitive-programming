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
  map<string, string> x;
  vector<pair<string, string>> y(m);
  pair<string, string> p;
  string a, b;

  REP(i, 0, n - 1) {
    cin >> p.second >> p.first;
    x.insert(p);
  }

  REP(i, 0, m - 1) { cin >> y[i].second >> y[i].first; }

  for (auto m : y) {
    cout << m.second << " " << m.first << " #";
    cout << x[m.first.substr(0, m.first.size() - 1)] << endl;
  }

  return 0;
}
