#include <stdio.h>

int main(void)
{
	int num1 = 15;
	int num2 = 5;

	printf(" 1 ��ځ@����Z�̌��ʂ́A%d�A�]��́A%d\n", num1 / num2, num1 % num2);
	num1 -= 2;
	printf(" 2 ��ځ@����Z�̌��ʂ́A%d�A�]��́A%d\n", num1 / num2, num1 % num2);
	num1 -= 2;
	printf(" 3 ��ځ@����Z�̌��ʂ́A%d�A�]��́A%d\n", num1 / num2, num1 % num2);


	return 0;
}
