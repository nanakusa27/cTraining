#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void)
{
	String strInput = "";
	int inum = 0;

	printf("‚PŒ…‚Ì”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf("%s", strInput);
	inum = atoi(strInput);

	if (inum == 1 || inum == 2) {
		printf("‚P‚©‚Q‚ª“ü—Í‚³‚ê‚Ü‚µ‚½B\n");
	}
	else {
		printf("‚P‚Æ‚QˆÈŠO‚ª“ü—Í‚³‚ê‚Ü‚µ‚½B\n");
	}

	return 0;
}
