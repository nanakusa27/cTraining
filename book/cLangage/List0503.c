#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	printf("���Ȃ��̉^����肢�܂�\n");
	srand((unsigned)time(0UL));
	int fortune = rand() % 5 + 1;

	switch (fortune) {
	case 1:
	case 2:
		printf("�����ˁI\n");
		break;
	
	case 3:
		printf("���ʂł�\n");
		break;
	
	case 4:
	case 5:
		printf("���[��c\n");
	}
	
	return 0;
}
