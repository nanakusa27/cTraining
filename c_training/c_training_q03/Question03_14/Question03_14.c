#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(0UL));

	double discount = rand() % 43 + 6;
	int price = 1000;
	double tax = 0.1;

	printf(
		"�{���̒l���������肵�܂����I\n���Ȃ��̒l��������%d%%�ł��B\n%d�~�̏��i�̏ꍇ�A�Ŕ�����\\%d�ōw���ł��܂��B\n����Ŋz�i1�~�����؂�̂āj�́A\\%d�ł��B\n",
		(int)discount, price, (int)(price * (100 - discount) / 100), (int)(price * (100 - discount) / 100 * tax)
	);


	return 0;
}

