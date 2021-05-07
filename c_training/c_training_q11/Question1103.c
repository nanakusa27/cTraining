#include <stdio.h>
#include <string.h>

int main(void)
{
	typedef struct {
		char str[256];
	} Frog;

	Frog frog = { "井の中の蛙、大海を知らず" };

	char check[256] = "井の中の蛙、大海を知らず";

	if (strcmp(frog.str, check) == 0) {
		printf("文字列は同じです。\n");
		printf("\"%s\"はことわざです\n", frog.str);
	}

	return 0;
}