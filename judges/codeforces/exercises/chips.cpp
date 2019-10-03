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
  int n, m, x = 0;
  cin >> n >> m;

  int i = 1, last = 0;
  while (m - x >= 0) {
    last = x;
    x += i;
    i++;
    if (i > n)
      i = 1;
  }

  cout << m - last << endl;

  return 0;
}
