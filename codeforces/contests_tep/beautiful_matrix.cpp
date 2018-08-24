#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[5][5];
    bool found = false;

    for (int j = 0; j < 5; ++j)
    {
        for (int i = 0; i < 5; ++i)
        {
            cin >> a[j][i];
            if(a[j][i]==1){
                cout << abs(j-2) + abs(i-2) << endl;
                found = true;
                break;
            }
        }
        if(found) break;
    }
    return 0;
}
