#include <stdio.h>

int main(void)
{
	int a = 70;
	printf("�ϐ�a�ɂ�%d�������Ă��܂�\n", a);

	void* addrA = (void*)&a;
	printf("�ϐ�a�̃A�h���X�F%p\n", addrA);

	return 0;
}
