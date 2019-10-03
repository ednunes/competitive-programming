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
  ll n, k, r = 0;
  cin >> n >> k;
  REP(i, 0, n - 1) {
    int x = 0;
    string s;
    cin >> s;
    for (auto c : s) {
      if (c == '4' or c == '7')
        x++;
    }
    if (x <= k)
      r++;
  }
  cout << r << endl;

  return 0;
}
