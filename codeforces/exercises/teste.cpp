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
  string s = "eduardo_nunes";
  cout << s << endl;

  char c = 'a';
  string cc = "a";
  cout << "CC " << cc << endl;

  string ss = c + s;
  string sss = s + c;
  string ssss = cc + s;

  cout << ss << " " << sss << " " << ssss << endl;

  return 0;
}
