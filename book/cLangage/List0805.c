#include <stdio.h>

typedef char String[1024];

void hello(String name)
{
	printf("%s����A����ɂ���\n", name);
}

int main(void)
{
	printf("�֐����Ăяo���܂�\n");
	hello("��");
	hello("�ԏ�");
	hello("�C��");
	printf("�֐��̌Ăяo�����I���܂���\n");

	return 0;
}
