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

#define MAX 1010

int main() {
  IOS;

  string s;
  REP(i, 1, MAX) { s += to_string(i); }

  int n;
  cin >> n;
  cout << s[n - 1] << endl;

  return 0;
}
