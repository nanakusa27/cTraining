#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(0UL));
	enum { FIRE, WATER, WIND, EARTH };
	int gems[10];

	//宝石をランダムに生成
	for (int i = 0;i < 10;i++) {
		int gemType = rand() % 4;
		gems[i] = gemType;
	}

	//次に宝石10個の内容を画面に表示
	for (int i = 0;i < 10;i++) {
		switch (gems[i]) {
		case FIRE:
			printf("$");
			break;
		case WATER:
			printf("*");
			break;
		case WIND:
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
