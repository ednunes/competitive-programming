#include <bits/stdc++.h>

using namespace std;

bool is_prime3(int n)
{
    if (n < 2)
        return false;

    if (n == 2)
        return true;

    if (n % 2 == 0)
        return false;

    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0)
            return false;

    return true;
}
vector<int> primes(int N)
{
    vector<int> ps;

    for (int i = 2; i <= N; ++i)
        if (is_prime3(i))
            ps.push_back(i);

    return ps;
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v;
    (n<m) ? v = primes(m) : v = primes(n);

    auto it = find (v.begin(), v.end(), m);
    if (it != v.end()){
        it-=1;
        (*it==n) ? cout << "YES" << endl : cout << "NO" << endl; 
    }
    else cout << "NO" << endl;

    return 0;
}
