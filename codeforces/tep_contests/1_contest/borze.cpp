#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int x = 0;
    for (int i = 0, size = s.size(); i < size; ++i)
    {
        if (s[i] == '-' and s[i + 1] == '.')
        {
            x = 1;
            ++i;
        }
        else if (s[i] == '-' and s[i + 1] == '-')
        {
            x = 2;
            ++i;
        }
        else x = 0;
        cout << x;
    }
    cout << endl;

    return 0;
}
