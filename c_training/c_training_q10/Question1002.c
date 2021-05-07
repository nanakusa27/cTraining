#include <stdio.h>

int main(void)
{
	char moji[] = { 'A','B','C','D','E','F' };
	char* pmoji = &moji[0];

	printf("*pmoji[0]:%2c\tpmoji[0](cmoji1[0]のアドレス番地):%p\n", moji[0], pmoji);
	printf("*pmoji[1]:%2c\tpmoji[1](cmoji1[1]のアドレス番地):%p\n", moji[1], pmoji+1);
	printf("*pmoji[2]:%2c\tpmoji[2](cmoji1[2]のアドレス番地):%p\n", moji[2], pmoji+2);
	printf("*pmoji[3]:%2c\tpmoji[3](cmoji1[3]のアドレス番地):%p\n", moji[3], pmoji+3);
	printf("*pmoji[4]:%2c\tpmoji[4](cmoji1[4]のアドレス番地):%p\n", moji[4], pmoji+4);

	return 0;
}
