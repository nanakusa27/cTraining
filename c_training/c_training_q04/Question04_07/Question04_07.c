#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	printf("�������J�n���܂��B\n");
	bool flg = false;
	
	if (flg) {
		printf("1��ځFflg�̒l��true�ł��B\n");
	}
	else {
		printf("1��ځFflg�̒l��false�ł��B\n");
	}

	if (!flg) {
		printf("2��ځF!flg�̒l��true�ł��B\n");
	}
	else {
		printf("2��ځF!flg�̒l��false�ł��B\n");
	}

	printf("�������I�����܂��B\n");

	return 0;
}
