#include <stdio.h>

int main(void)
{
	int ary[7] = { 9,4,7,3,2,5,1 };
	int cnt = 7;
	int tmp = 0;

	for (int i = 0;i < cnt;i++) {
		for (int x = 0;x < cnt - i;x++) {
			if (ary[x] > ary[x + 1]) {
				tmp = ary[x];
				ary[x] = ary[x + 1];
				ary[x + 1] = tmp;
			}
		}
	}
	for (int a = 0;a < cnt;a++) {
		printf("%d\n", ary[a]);
	}
}
