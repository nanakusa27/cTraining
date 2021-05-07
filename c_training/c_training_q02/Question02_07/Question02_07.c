#include <stdio.h>

int main(void)
{
	char a = 0101;
	char b = 0x42;
	char c = 67;
	char d = 'D';

	printf("%d %d %d %d\n", a, b, c, d);
	printf("%c %c %c %c\n", a, b, c, d);

	return 0;
}
