#include <stdio.h>

void funcB(void)
{
	printf("�֐�B�ł�\n");
}

void funcA(void)
{
	printf("�֐�A�ł�\n");
	funcB();
}

int main(void)
{
	funcA();
	return 0;
}
