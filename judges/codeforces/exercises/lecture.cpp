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
  string a, b;
  map<string, string> mp;
  REP(i, 0, m - 1) {
    cin >> a >> b;
    mp[a] = (a.size() > b.size()) ? b : a;
  }

  REP(j, 0, n - 1) {
    cin >> a;
    cout << mp[a] << " ";
  }
  cout << endl;

  return 0;
}
