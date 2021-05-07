#include <stdio.h>

int main(void)
{
	int n = 1;
	for (int height = 1;height <= 8;height++) {
		for (int blank = height;blank < 8;blank++) {
			printf(" ");
		}
		for (int a = 0;a < n;a++) {
			if (height % 2) {
				printf("*");
			} else {
				printf("@");
			}
		}
		
		printf("\n");
		n += 2;
	}

	return 0;
}
