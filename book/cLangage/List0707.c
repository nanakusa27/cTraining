#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(0UL));
	//enum { FIRE, WATER, WIND, EARTH };
	const char GEM_CHERS[] = { '$','*','@','#' };
	int gems[10];

	//��΂������_���ɐ���
	for (int i = 0;i < 10;i++) {
		int gemType = rand() % 4;
		gems[i] = gemType;
	}

	//���ɕ��10�̓��e����ʂɕ\��
	for (int i = 0;i < 10;i++) {
		printf("%c ", GEM_CHERS[gems[i]]);
	}

	return 0;
}
