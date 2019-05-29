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
  int n, x, ch = 0, bi = 0, ba = 0;
  cin >> n;

  REP(i, 1, n) {
    cin >> x;
    if (i % 3 == 2)
      bi += x;
    else if (i % 3 == 0)
      ba += x;
    else
      ch += x;
  }

  string s = "chest";
  if (bi > ba and bi > ch)
    s = "biceps";
  else if (ba > bi and ba > ch)
    s = "back";

  cout << s << endl;

  return 0;
}
