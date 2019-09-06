#include<bits/stdc++.h>
using namespace std;
#define f(i) (i - 'a')
int main()
{
	int r, b;
	cin >> r >> b;
	int x;
	for (int i = 0; i < r; i++)
		cin >> x >> x;
	for (int i = 0; i < b; i++)
		cin >> x >> x;
	if (r == b)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
