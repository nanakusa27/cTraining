#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(0UL));
	int r = rand() % 6;
	printf("�T�C�R����U��܂��B\n�T�C�R���̖ڂ�%d�ł����B", r);

	return 0;
}
