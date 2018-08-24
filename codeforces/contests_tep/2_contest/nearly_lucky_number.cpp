#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    int x = 0;

    for (int i = 0, size = s.size(); i < size; ++i)
        if(s[i]=='7' or s[i]=='4') x++;

    (x==4 or x==7) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}

