#include <stdio.h>

int main(void)
{
	int ary[9] = { 10,20,30,40,50,60,70,80,90 };

	printf("“ü‚ê‘Ö‚¦‚é‘O‚Ìó‘ÔF");
	for (int i = 0;i < 9;i++) {
		printf("%d ", ary[i]);
	}
	printf("\n");

	int sortedAry[9] = { 0 };
	int n = 0;
	for (int i = 8;i >= 0;i--) {
		sortedAry[n] = ary[i];
		n++;
	}

	printf("“ü‚ê‘Ö‚¦‚½Œã‚Ìó‘ÔF");
	for (int i = 0;i < 9;i++) {
		printf("%d ", sortedAry[i]);
	}
	printf("\n");
	return 0;
}
