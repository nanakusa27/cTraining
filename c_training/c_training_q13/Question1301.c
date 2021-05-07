//20210426
//Question13_01.c
//MasakiWatanabe

#include <stdio.h>

int main(void)
{
	int moji;

	FILE* fp;
	fp = fopen("memo.txt", "w");

	if (fp == NULL) {
		printf("error\n");
		exit(1);
	}

	printf("•¶Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");

	while ((moji = getchar()) != EOF)
	{
		fputc(moji, fp);
	}

	fclose(fp);

	if ((fp = fopen("memo.txt", "r")) == NULL) {
		printf("error\n");
		exit(1);
	}

	while ((moji = fgetc(fp)) != EOF) {
		putchar((char)moji);
	}

	fclose(fp);

	return 0;
}