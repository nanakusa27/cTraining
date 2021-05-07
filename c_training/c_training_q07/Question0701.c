#include <stdio.h>

int main(void)
{
	int test[5] = { 88,63,54,76,45 };
	int sum = 0;
	for (int i = 0;i < 5;i++) {
		sum += test[i];
	}

	double avg = (double)sum / 5;

	printf("５科目の合計点：%d点\n", sum);
	printf("５科目の平均点：%.1f点\n", avg);

	return 0;
}
