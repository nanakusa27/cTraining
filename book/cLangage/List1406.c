#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fp;
	int wbuf = 100;
	int rbuf;

	if ((fp = fopen("try.dat", "wb")) == NULL) {
		exit(1);
	}

	fwrite(&wbuf, sizeof(int), 1, fp);
	fclose(fp);

	if ((fp = fopen("try.dat", "rb")) == NULL) {
		exit(1);
	}

	int cn = fread(&rbuf, sizeof(int), 1, fp);
	fclose(fp);

	printf("%d�̃f�[�^��ǂݎ��܂����F%d\n", cn, rbuf);

	return 0;
}
