#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(0UL));
	//enum { FIRE, WATER, WIND, EARTH };
	const char GEM_CHERS[] = { '$','*','@','#' };
	int gems[10];

	//•óÎ‚ğƒ‰ƒ“ƒ_ƒ€‚É¶¬
	for (int i = 0;i < 10;i++) {
		int gemType = rand() % 4;
		gems[i] = gemType;
	}

	//Ÿ‚É•óÎ10ŒÂ‚Ì“à—e‚ğ‰æ–Ê‚É•\¦
	for (int i = 0;i < 10;i++) {
		printf("%c ", GEM_CHERS[gems[i]]);
	}

	return 0;
}
