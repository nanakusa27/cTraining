#include <stdio.h>

int main(void)
{
	int scores[2][3];
	scores[0][0] = 80;
	scores[0][1] = 77;
	scores[0][2] = 65;
	scores[1][0] = 51;
	scores[1][1] = 80;
	scores[1][2] = 95;

	for (int i = 0;i < 2;i++) {
		printf("%d�l�ڂ̓_����\�����܂�\n", i + 1);
		for (int j = 0;j < 3;j++) {
			printf("%d�ȖځF%d\n", j + 1, scores[i][j]);
		}
	}


	return 0;
}
