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

  int mid = ceil(n / 2.0);
  int f = mid, l = mid;
  REP(i, 1, n) {
    REP(j, 1, n)(j >= f and j <= l) ? cout << "D" : cout << "*";
    cout << endl;
    if (i < mid) {
      f--;
      l++;
    } else {
      f++;
      l--;
    }
  }

  return 0;
}
