#include <stdio.h>

int main(void)
{
	printf("��������͂��Ă�������\n");
	int a = 0;
	scanf("%d", &a);

	if ((a % 2) == 1) {
		printf("%d�͊�ł��B\n", a);
	} else {
		printf("%d�͋����ł��B\n", a);
	}

	return 0;
}
