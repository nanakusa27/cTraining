#include <stdio.h>
#include <string.h>

int main(void)
{
	int a[4] = { 19,20,29,29, };
	int b[4];
	memcpy(b, a, 16);
	printf("�z��a��2�ڂ̗v�f�́F%d�A%p�Ԓn�Ɋi�[\n", a[1], &a[1]);
	printf("�z��b��2�ڂ̗v�f�́F%d�A%p�Ԓn�Ɋi�[\n", b[1], &b[1]);
	
	return 0;
}
