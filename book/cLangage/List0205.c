#include <stdio.h>

int main(void)
{
	int tax = 108;
	int fax = 50000;
	printf("50,000�~����40,000�~�ɒl�������܂��B\n");
	tax = 40000;
	printf("FAX�̐V���i�i�ō��݁j�F%d�~\n", fax * tax / 100);

	return 0;
}
