#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, a = 0;
    string s; cin >> x >> s;

    for (int i = 0; i < x-1; ++i)
        if(s[i]==s[i+1]) a++;

    cout << a << endl;

    return 0;
}
