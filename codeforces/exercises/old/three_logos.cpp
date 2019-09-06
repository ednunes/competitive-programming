#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
struct Rect {
	int x, y;
	int id;
}rect[3];
int l, w;
bool cmp(Rect a,Rect b) {
	return a.x > b.x;
}

int main()
{
	int n, m, i, p[100010], sum;
	char  a = 'A';
	while (cin >> rect[0].x >> rect[0].y >> rect[1].x >> rect[1].y >> rect[2].x >> rect[2].y) {
		rect[0].id = 0;
		rect[1].id = 1;
		rect[2].id = 2;
		if (rect[0].x < rect[0].y)swap(rect[0].x, rect[0].y);
		if (rect[1].x < rect[1].y)swap(rect[1].x, rect[1].y);
		if (rect[2].x < rect[2].y)swap(rect[2].x, rect[2].y);
		sort(rect, rect + 3, cmp);
		if (rect[1].x == rect[2].x&&rect[1].x == rect[0].x&&rect[1].y + rect[2].y == rect[0].x - rect[0].y)
		{
			printf("%d\n", rect[0].x);
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < rect[i].y; j++) {
					for (int k = 0; k < rect[i].x; k++) {
						printf("%c", 'A' + rect[i].id);
					}
				cout << endl;
				}
				
			}
			continue;
		}
		else {
			int flag = 0;
			int col = rect[0].x, row = col - rect[0].y, t;
			if (rect[1].x == rect[2].x&&rect[1].x == row && rect[1].y + rect[2].y == col) {
				t = rect[1].y;
				flag = 1;
			}
			if (rect[1].y == rect[2].y&&rect[1].y == row && rect[1].x + rect[2].x == col) {
				flag = 1;
				t = rect[1].x;
			}
			if (rect[1].x == rect[2].y&&rect[1].y + rect[2].x == col) {
				t = rect[1].y;
				flag = 1;
			}
			if (rect[1].y == rect[2].x&&rect[1].x + rect[2].y == col) {
				t = rect[1].x;
				flag = 1;
			}
			if (flag) {
				printf("%d\n", col);
				for (i = 0; i < rect[0].y; ++i) {
					for (int j = 0; j < rect[0].x; ++j)
						printf("%c", 'A' + rect[0].id);
					printf("\n");
				}
				for (i = 0; i < row; ++i) {
					for (int j = 0; j < col; ++j)
						if (j < t)
							printf("%c", 'A' + rect[1].id);
						else
							printf("%c", 'A' + rect[2].id);
					printf("\n");
				}
			}
			else
				printf("-1\n");
		}

	}
}
