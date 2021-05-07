#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(0UD));
	int r = rand() % 100;
	printf("‚ ‚È‚½‚Í‚½‚Ô‚ñA%dÎ‚Å‚·‚Ë?\n", r);

	return 0;
}
