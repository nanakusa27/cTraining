#include <stdio.h>

int main(void)
{
	int a = 70;
	printf("�ϐ�a�ɂ�%d�������Ă��܂�\n", a);

	int* addrA = (void*)&a;
	printf("�ϐ�a�̃A�h���X�F%p\n", addrA);
	printf("%p�Ԓn�Ɋi�[����Ă�����F%d\n", addrA, *addrA);
	
	return 0;
}
