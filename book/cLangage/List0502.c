#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	printf("‚ ‚È‚½‚Ì‰^¨‚ğè‚¢‚Ü‚·\n");
	srand((unsigned)time(0UL));
	int fortune = rand() % 4 + 1;

	switch (fortune) {
	case 1:
		printf("‘å‹g\n");
		break;

	case 2 :
		printf("’†‹g\n");
		break;

	case 3: 
		printf("¬‹g\n");
		break;

	default:
		printf("‹¥\n");
	}

	return 0;
}
