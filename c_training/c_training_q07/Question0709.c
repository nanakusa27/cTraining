#include <stdio.h>

int main(void)
{
	int num[2][3];
	num[0][0] = 10;
	num[0][1] = 20;
	num[0][2] = 30;
	num[1][0] = 40;
	num[1][1] = 50;
	num[1][2] = 60;

	int cnt = 1;
	for (int i = 0;i < 2;i++) {
		for (int n = 0;n < 3;n++) {
			printf("%d’i–Ú‚Ì’†g‚Í%d‚Å‚·\n", cnt,num[i][n]);
			cnt++;
		}
	}

	return 0;
}
