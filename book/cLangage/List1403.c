#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fp;
	char wbuf[64];

	if ((fp = fopen("memo1.txt", "w")) == NULL) {
		exit(1);
	}

	fputs("gobernment of the people, \nby the people,\nfor the people", fp);

	fclose(fp);

	if ((fp = fopen("memo1.txt", "r")) == NULL) {
		exit(1);
	}

	while (fgets(wbuf, 64, fp) != NULL) {
		printf("%s", wbuf);
	}

	fclose(fp);

	return 0;
}