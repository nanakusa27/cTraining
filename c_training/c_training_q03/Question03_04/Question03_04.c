#include <stdio.h>

int main(void)
{
	int num = 10;
	printf("%d に", num);
	num += 5;
	printf(" 5 を加えた値は%d です\n", num);
	num -= 3;
	printf("加算結果から 3 を引いた結果は %d です\n", num);

	return 0;
}
