#include <stdio.h>

int main(void)
{
	int a = 70;
	printf("変数aには%dが入っています\n", a);

	long addrA = (long)&a;
	printf("変数aのアドレス：%ld\n", addrA);

	return 0;
}
