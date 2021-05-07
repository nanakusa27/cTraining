#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(0UL));
	int r = rand() % 6;
	printf("サイコロを振ります。\nサイコロの目は%dでした。", r);

	return 0;
}
