#include <stdio.h>

int main(void)
{
	int scores[] = { 75,57,90,46,82 };
	int sum = 0;

	for (int i = 0;i < 5;i++) {
		sum += scores[i];
	}
	int avg = sum / 5;
	printf("���v�_�F%d\n", sum);
	printf("���ϓ_�G%d\n", avg);

	return 0;
}
