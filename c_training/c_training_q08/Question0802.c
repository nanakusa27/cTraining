#include <stdio.h>

typedef char String[1024];

int mathMaxCheck(int x, int y)
{
	int check = 0;
	if (x > y) {
		check = 1;
	} else if (x < y) {
		check = 3;
	} else {
		check = 2;
	}
	return check;
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

	printf("���l�̔�r�����܂�\n");
	int check = mathMaxCheck(ipt1, ipt2);
	switch (check) {
	case 1:
		printf("1��ڂ�2��ڂő傫���l��%d�ł�", ipt1);
		break;
	case 2:
		printf("1��ڂ�2��ڂ̒l�́A%d�œ����l�ł�", ipt1);
		break;
	case 3:
		printf("1��ڂ�2��ڂő傫���l��%d�ł�", ipt2);
		break;
	}
	

	return 0;
}
