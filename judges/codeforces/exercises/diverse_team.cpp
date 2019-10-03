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
  int n, k;
  cin >> n >> k;
  set<int> st;
  vector<int> v;

  int x;
  REP(i, 0, n - 1) {
    cin >> x;
    if ((st.insert(x)).second) {
      v.push_back(i + 1);
    }
  }

  if (st.size() < k) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
    REP(i, 0, k - 1)
    cout << v[i] << " ";
    cout << endl;
  }

  return 0;
}
