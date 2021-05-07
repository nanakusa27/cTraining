#include <stdio.h>

int main(void)
{
	for (int i = 3;i > 0;i--) {
		for (int n = 5;n > 0;n--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
