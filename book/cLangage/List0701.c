#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(0UL));
	enum { FIRE, WATER, WIDE, EARTH };

	//•óÎ‚Ì‘®«‚ğƒ‰ƒ“ƒ_ƒ€‚ÉŒˆ’è
	for (int i = 0;i < 10;i++) {
		int gemType = rand() % 4;
		switch (gemType) {
		case FIRE:
			printf("$");
			break;
		case WATER:
			printf("*");
			break;
		case WIDE:
			printf("@");
			break;
		case EARTH:
			printf("#");
			break;
		}
		printf(" ");
	}
	return 0;
}