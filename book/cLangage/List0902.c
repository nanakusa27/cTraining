#include <stdio.h>

int main(void)
{
	int a = 70;
	printf("変数aには%dが入っています\n", a);

	void* addrA = (void*)&a;
	printf("変数aのアドレス：%p\n", addrA);

	return 0;
}
