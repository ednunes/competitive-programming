#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5, SQ = 1e3 + 5;
int n, x[N], y[N], p[N];

bool cmp(int i, int j) {
	int id1 = x[i] / SQ, id2 = x[j] / SQ;
	return make_pair(id1, id1 & 1? y[i]: -y[i]) < make_pair(id2, id2 & 1? y[j]: -y[j]);
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d%d", x + i, y + i);
	iota(p, p + n, 0);
	sort(p, p + n, cmp);
	for (int i = 0; i < n; i++)
		printf("%d ", ++p[i]);
    return 0;
}
