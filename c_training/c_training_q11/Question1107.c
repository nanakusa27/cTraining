#include <stdio.h>

int main(void)
{
	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	int a = 0;
	scanf("%d", &a);

	if ((a % 2) == 1) {
		printf("%d‚ÍŠï”‚Å‚·B\n", a);
	} else {
		printf("%d‚Í‹ô”‚Å‚·B\n", a);
	}

	return 0;
}
