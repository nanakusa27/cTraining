#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(0UL));
	enum { FIRE, WATER, WIDE, EARTH };
	int gems[10];

	//•óÎ‚ğƒ‰ƒ“ƒ_ƒ€‚É¶¬
	for (int i = 0;i < 10;i++) {
		int gemType = rand() % 4;
		gems[i] = gemType;
	}
	for (int i = 0;i < 10;i++) {
		printf("%d ", gems[i]);
	}
	return 0;
}
