#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k, n;
	cin >> k >> n;
	int a[500000], b[2][5000];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	//b[0][k - 1] = b[1][k - 1] = 500001;
	for (int i = 0; i < k; i++)
		b[0][i] = b[1][i] = 1000000000;
	b[0][0] = a[1] - a[0];
	if (n > 2)
		b[1][0] = min(a[2] - a[1], b[0][0]);
	else
		b[1][0] = 1000000000;
	for (int i = 3; i < n; i++)
	{
		int f = (i + 1) % 2;
		for (int j = min(i / 2, k - 1); j > 0; j--)
		{
			b[f][j] = min(min(b[0][j], b[1][j]), b[f][j - 1] + a[i] - a[i - 1]);
		}
		b[f][0] = min(min(b[0][0], b[1][0]), a[i] - a[i - 1]);
	}
	cout << min(b[0][k - 1], b[1][k - 1]);
	return 0;
}

