#include <stdio.h>

int tax10 = 10;
int tax8 = 8;

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
	printf("�ō��݁i%d%%�j���i�F%d�~\n", tax8, ipt + taxCalc(ipt, tax8));
	printf("����Ŋz�i%d%%�j:%d�~\n", tax8, taxCalc(ipt, tax8));
	printf("�ō��݁i%d%%�j���i�F%d�~\n", tax10, ipt + taxCalc(ipt, tax10));
	printf("����Ŋz�i%d%%�j�F%d�~\n", tax10, taxCalc(ipt, tax10));

	return 0;
}
