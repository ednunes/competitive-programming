#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int n, k; cin>>n>>k;
    pair<int, int> arr [n];
    for (int i = 0; i < n; i++) {
        int x, y; cin>>x>>y;
        arr[i].first = x;
        arr[i].second = y;
    }

    pair<int, int> cur, prev;
    prev = arr[0];
    float dis = 0;
    for (int i = 1; i < n; i++) {
        cur = arr[i];
        dis += sqrt(pow(cur.first - prev.first, 2) + pow(cur.second - prev.second, 2));
        prev = arr[i];
    }

    printf("%0.10f", dis / 50 * k);

    return 0;
}
