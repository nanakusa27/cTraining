#include <stdio.h>

int main(void)
{
	printf("整数を入力してください\n");
	int a = 0;
	scanf("%d", &a);

	if ((a % 2) == 1) {
		printf("%dは奇数です。\n", a);
	} else {
		printf("%dは偶数です。\n", a);
	}

	return 0;
}
