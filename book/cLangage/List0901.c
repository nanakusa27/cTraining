#include <stdio.h>

int main(void)
{
	int a = 70;
	printf("�ϐ�a�ɂ�%d�������Ă��܂�\n", a);

	long addrA = (long)&a;
	printf("�ϐ�a�̃A�h���X�F%ld\n", addrA);

	return 0;
}
