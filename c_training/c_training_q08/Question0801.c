#include <stdio.h>

typedef char String[1024];

int mathMax(int x, int y)
{
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

int main(void)
{
	printf("2���̐��l��2����͂��Ă�������\n");
	String input;
	printf("1��ځF");
	scanf("%s", input);
	int ipt1 = atoi(input);
	printf("2��ځF");
	scanf("%s", input);
	int ipt2 = atoi(input);
	
	int large = mathMax(ipt1, ipt2);
	printf("���l�̔�r�����܂�\n");
	printf("1��ڂ�2��ڂő傫���ق���%d�ł�\n", large);

	return 0;
}
