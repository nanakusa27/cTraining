#include <stdio.h>

int main(void)
{
	int test[5] = { 88,63,54,76,45 };
	int sum = 0;
	for (int i = 0;i < 5;i++) {
		sum += test[i];
	}

	double avg = (double)sum / 5;

	printf("�T�Ȗڂ̍��v�_�F%d�_\n", sum);
	printf("�T�Ȗڂ̕��ϓ_�F%.1f�_\n", avg);

	return 0;
}
