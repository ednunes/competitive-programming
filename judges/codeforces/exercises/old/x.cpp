#include<bits/stdc++.h>
using namespace std;
const int N = 2e3 + 23;
int x[N], y[N];
int main()
{
	int n;
	cin >> n;
	long long ans = 0;
	map<pair<int, int>, int>cnt;
	for (int i = 0;i<n;i++)
	{
		cin >> x[i] >> y[i];
		for (int j = 0;j < i;j++)
		{
			int midx, midy;
			midx = x[i] + x[j];
			midy = y[i] + y[j];
            cout <<"\t" << i << " " << j << " "  <<  midx << " " << midy << " " << ans << endl;
			ans += cnt[{midx, midy}];
			cnt[{midx, midy}]++;
		}
	}
	cout << ans << endl;
    return 0;
}
