#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, a;
    cin >> s;
    int u = 0, d = 0;

    for (auto x : s)
        islower(x) ? d++ : u++;
    
    for (auto x : s)
        (u <= d) ? a+=tolower(x) : a+=toupper(x);

    cout << a << endl;

    return 0;
}
