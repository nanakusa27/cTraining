#include <stdio.h>

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
	printf("�ō��݁i8%%�j���i�F%d�~\n", ipt + taxCalc(ipt, 8));
	printf("����Ŋz�i8%%�j:%d�~\n", taxCalc(ipt, 8));
	printf("�ō��݁i10%%�j���i�F%d�~\n", ipt + taxCalc(ipt, 10));
	printf("����Ŋz�i10%%�j:%d�~\n", taxCalc(ipt, 10));

	return 0;
}
