#include <stdio.h>

int main(void)
{
	printf("%d＋%d は %d です。\n", 15, 4, 15 + 4);
	printf("%d－%d は %d です。\n", 15, 4, 15 - 4);
	printf("%d×%d は %d です。\n", 15, 4, 15 * 4);
	printf("%d÷%d は %d です。\n", 15, 4, (int)15 / 4);
	printf("%d÷%d の余りは %d です。\n", 15, 4, 15 % 4);

	return 0;
}
