#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("ˆ—‚ÌŠJn\n");
	int* adr = (int*)malloc(sizeof(int)*500);
	for (int i = 0;i < 500;i++) {
		*(adr + i) = i;
	}

	for (int i = 490;i < 500;i++) {
		printf("adr[%d] = %d\n", i, *(adr + i));
	}

	free(adr);

}