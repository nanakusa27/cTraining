#include <stdio.h>
#include <string.h>

int main(void)
{
	typedef struct {
		char str[256];
	} Frog;

	Frog frog = { "��̒��̊^�A��C��m�炸" };

	char check[256] = "��̒��̊^�A��C��m�炸";

	if (strcmp(frog.str, check) == 0) {
		printf("������͓����ł��B\n");
		printf("\"%s\"�͂��Ƃ킴�ł�\n", frog.str);
	}

	return 0;
}