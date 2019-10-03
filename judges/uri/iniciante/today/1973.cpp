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
  ll n;
  cin >> n;
  vector<ll> v(n);

  for (auto &i : v)
    cin >> i;

  ll i = 0;
  set<ll> st;
  while (i < n and i >= 0) {
    st.insert(i);
    if (v[i] & 1) {
      if (v[i])
        v[i]--;
      i++;
    } else {
      if (v[i])
        v[i]--;
      i--;
    }
  }

  ll c = accumulate(v.begin(), v.end(), 0LL);
  cout << st.size() << " " << c << endl;

  return 0;
}
