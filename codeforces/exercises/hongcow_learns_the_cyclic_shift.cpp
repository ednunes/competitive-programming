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
  string s;
  cin >> s;
  set<string> st;

  REP(i, 0, s.size() - 1) {
    s = s.back() + s;
    s.pop_back();
    st.insert(s);
  }

  cout << st.size() << endl;

  return 0;
}
