#include <stdio.h>

int main(void)
{
	const int TAX = 108;
	int fax = 50000;
	printf("50,000�~����40,000�~�ɒl�������܂�\n");
	TAX = 40000;
	printf("FAX�̐V���i�i�ō��݁j�F%d\n", fax * TAX / 100);

	return 0;
}
