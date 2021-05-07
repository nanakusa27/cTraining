#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(0UL));
	//enum { FIRE, WATER, WIND, EARTH };
	const char GEM_CHERS[] = { '$','*','@','#' };
	int gems[10];

	//宝石をランダムに生成
	for (int i = 0;i < 10;i++) {
		int gemType = rand() % 4;
		gems[i] = gemType;
	}

	//次に宝石10個の内容を画面に表示
	for (int i = 0;i < 10;i++) {
		printf("%c ", GEM_CHERS[gems[i]]);
	}

	return 0;
}
