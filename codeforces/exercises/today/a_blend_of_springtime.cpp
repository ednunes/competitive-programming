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
  string s, ss = "";
  cin >> s;

  vector<char> vv = {'A', 'B', 'C'};
  vector<string> v;
  do {
    ss = vv[0];
    ss += vv[1];
    ss += vv[2];
    v.push_back(ss);
    ss = "";
  } while (next_permutation(vv.begin(), vv.end()));

  if (s.size() >= 3) {
    for (int i = 0; i < v.size(); i++) {
      if (s.find(v[i]) != string::npos) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;

  return 0;
}
