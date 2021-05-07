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
	printf("ŠÖ”A‚Å‚·\n");
	funcB();
}

void funcB(void)
{
	printf("ŠÖ”B‚Å‚·\n");
}
