#include <stdio.h>

int tax8Calc(int price)
{
	return price * 8 / 100;
}

int main(void)
{
	typedef char String[1024];
	printf("���ٓ��̖{�̉��i����͂��Ă��������B\n");
	String input;
	scanf("%s", input);
	int ipt = atoi(input);
	printf("�ō��݁i8%%�j���i�F%d�~\n", ipt + tax8Calc(ipt));
	printf("����Ŋz�i8%%�j:%d�~\n", tax8Calc(ipt));
	return 0;
}
