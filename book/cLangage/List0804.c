#include <stdio.h>

void funcA(void);
void funcB(void);

int main(void)
{
	funcA();
	return 0;
}

void funcA(void)
{
	printf("�֐�A�ł�\n");
	funcB();
}

void funcB(void)
{
	printf("�֐�B�ł�\n");
}
