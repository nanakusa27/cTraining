#include <stdio.h>

void funcB(void)
{
	printf("ŠÖ”B‚Å‚·\n");
}

void funcA(void)
{
	printf("ŠÖ”A‚Å‚·\n");
	funcB();
}

int main(void)
{
	funcA();
	return 0;
}
