#include <stdio.h>

int tax8Calc(int price)
{
	return price * 8 / 100;
}

int main(void)
{
	typedef char String[1024];
	printf("‚¨•Ù“–‚Ì–{‘Ì‰¿Ši‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
	String input;
	scanf("%s", input);
	int ipt = atoi(input);
	printf("Å‚İi8%%j‰¿ŠiF%d‰~\n", ipt + tax8Calc(ipt));
	printf("Á”ïÅŠzi8%%j:%d‰~\n", tax8Calc(ipt));
	return 0;
}
