#include <stdio.h>

int main(void)
{
	int num1 = 15;
	int num2 = 5;

	printf(" 1 回目　割り算の結果は、%d、余りは、%d\n", num1 / num2, num1 % num2);
	num1 -= 2;
	printf(" 2 回目　割り算の結果は、%d、余りは、%d\n", num1 / num2, num1 % num2);
	num1 -= 2;
	printf(" 3 回目　割り算の結果は、%d、余りは、%d\n", num1 / num2, num1 % num2);


	return 0;
}
