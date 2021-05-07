#include <stdio.h>

int main(void)
{
	char a = 'A';

	printf("%c%c%c", (char)a, (char)a + 1, (char)a + 2);

	return 0;
}
