#include <stdio.h>

int main(void)
{
	int ary[10] = { 31,41,59,26,53,58,97,23,84 };

	printf("•À‚×‘Ö‚¦‘O‚Ìó‘ÔF");
	for (int i = 0;i < 10;i++) {
		printf(" %d", ary[i]);
	}
	printf("\n");

	int tmp = 0;
	for (int i = 0;i < 9;i++) {
		for (int n = 0;n < 9 - i;n++) {
			if (ary[n] > ary[n + 1]) {
				tmp = ary[n];
				ary[n] = ary[n + 1];
				ary[n + 1] = tmp;
			}
		}
	}
	printf("•À‚×‘Ö‚¦Œã‚Ìó‘ÔF");
	for (int i = 0;i < 10;i++) {
		printf(" %d", ary[i]);
	}

	return 0;
}
