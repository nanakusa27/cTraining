#include <stdio.h>
#include <stdbool.h>

int tax10 = 10;
int tax8 = 8;

void showPrice(int price, bool isEatIn)
{
	if (isEatIn) {
		printf("�C�[�g�C���̐ŗ��F%d%%\n", tax10);
		printf("�ō��݁i%d%%�j���i�F%d�~\n", tax10, price + taxCalc(price, tax10));
		printf("����Ŋz�i%d%%�j:%d�~\n", tax10, taxCalc(price, tax10));
	}
	else {
		printf("�����A��̐ŗ��F%d%%\n", tax8);
		printf("�ō��݁i%d%%�j���i�F%d�~\n", tax8, price + taxCalc(price, tax8));
		printf("����Ŋz�i%d%%�j:%d�~\n", tax8, taxCalc(price, tax8));
	}
}

int taxCalc(int price, int tax)
{
	return price * tax / 100;
}

int main(void)
{
	typedef char String[1024];
	printf("���ٓ��̖{�̉��i����͂��Ă��������B\n");
	String input;
	scanf("%s", input);
	int ipt = atoi(input);

	printf("�����A��̏ꍇ�F0�A�C�[�g�C���̏ꍇ�F1����͂��Ă��������B\n");
	scanf("%s", input);
	if (0 == atoi(input) || 1 == atoi(input)) {
		bool isEatin = atoi(input);
	}

	showPrice(ipt, isEatin);

	return 0;
}
