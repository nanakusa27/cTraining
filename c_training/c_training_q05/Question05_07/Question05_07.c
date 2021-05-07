#include <stdio.h>

int main(void)
{
	for (int n = 1;n <= 9;n++) {
		printf("%d‚Ì’i\t", n);

		for (int i = 1;i <= 9;i++) {
			printf("%2d\t", i * n);
		}

		printf("\n");
	}

	return 0;
}
