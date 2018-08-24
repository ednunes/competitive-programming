#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    string s;
    cin >> a >> b >> s;

    while (b--)
    {
        for (int i = 0, size = s.size(); i < size; ++i)
        {
            if (s[i] == 'B' and s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }

    cout << s << endl;

    return 0;
}
