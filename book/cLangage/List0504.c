#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	//const int DAIKICHI = 1;
	//const int CHUKICHI = 2;
	//const int KICHI = 3;
	//const int KYO = 4;

	enum { DAIKICHI = 1, CHUKICHI, KICHI, KYO };

	printf("あなたの運勢を占います\n");
	srand((unsigned)time(0UL));
	int fortune = rand() % 4 + 1;

	switch (fortune) {
	case DAIKICHI:
		printf("大吉\n");
		break;

	case CHUKICHI:
		printf("中吉\n");
		break;

	case KICHI:
		printf("小吉\n");
		break;

	default:
		printf("凶\n");
	}

	return 0;
}
