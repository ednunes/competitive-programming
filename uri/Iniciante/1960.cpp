#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    map<int, string> m;
    m.emplace(1000, "M");
    m.emplace(900, "CM");
    m.emplace(500, "D");
    m.emplace(400, "CD");
    m.emplace(100, "C");
    m.emplace(90, "XC");
    m.emplace(50, "L");
    m.emplace(40, "XL");
    m.emplace(10, "X");
    m.emplace(9, "IX");
    m.emplace(5, "V");
    m.emplace(4, "IV");
    m.emplace(1, "I");

    int a[14] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    int n;

    while (scanf("%d", &n), n)
    {   
        int i = 1;
        string s = "";
        while (n != 0)
        {
            if (n >= a[i] and n<=a[i-1])
            {
                n -= a[i];
                s += m[a[i]];
            }
            else ++i;
        }
        cout << s << endl;
    }
    return 0;
}
