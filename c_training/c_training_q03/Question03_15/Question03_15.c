#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main(void)
{
	srand((unsigned)time(0UL));

	double discount = rand() % 43 + 6;

	printf("���i���i����͂��Ă��������B�F");
	String priceStr;
	scanf("%s", priceStr);

	int price = atoi(priceStr);
	double tax = 0.1;
	double discountPrice = price * ((100 - discount) / 100);

	printf("�{���̒l���������肵�܂����I\n");
	printf("���Ȃ��̒l��������% d%% �ł��B\n", (int)discount);
	printf("%d�~�̏��i�̏ꍇ�A�Ŕ�����\\% d�ōw���ł��܂��B\n", price, (int)discountPrice);
	printf("����Ŋz�i1�~�����؂�̂āj�́A\\% d�ł��B\n", (int)(discountPrice * tax));
	printf("�l������̏��i���i�i�ō��݁j�́A% d�ł��B\n", (int)(discountPrice * (1 + tax)));


	return 0;
}
