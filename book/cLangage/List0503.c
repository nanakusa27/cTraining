#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	printf("‚ ‚È‚½‚Ì‰^¨‚ğè‚¢‚Ü‚·\n");
	srand((unsigned)time(0UL));
	int fortune = rand() % 5 + 1;

	switch (fortune) {
	case 1:
	case 2:
		printf("‚¢‚¢‚ËI\n");
		break;
	
	case 3:
		printf("•’Ê‚Å‚·\n");
		break;
	
	case 4:
	case 5:
		printf("‚¤[‚ñc\n");
	}
	
	return 0;
}
