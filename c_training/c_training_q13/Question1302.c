#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void input(char* text, int* len) {
	printf("�t�@�C���ɏ������ޕ�������͂��Ă�������\n");
	printf("���s����͂���ƁA�t�@�C���ւ̏������݂��J�n���܂�\n");
	scanf("%s", text);
	*len = strlen(test);
}

void write(char* filename, char* text, int len) {
	FILE* fp;
	if ((fp = fopen(filename, "w")) == NULL) {
		exit(1);
	}
	for (int i = 0;i < len;i++) {
		fputc(text[i], fp);
	}
	printf("�t�@�C���ւ̏������݂��������܂����B\n");
}

void read(char* filename) {
	FILE* fp;
	int ch = 0;
	if ((fp = fopen(filename, "r")) == NULL) {
		exit(1);
	}
	printf("�t�@�C������̓ǂݍ��ݓ��e��\�����܂�\n");
	while ((ch = fgets(fp)) == !EOF) {
		putchar((char)ch);
	}
	fclose(fp);
}

int main(void) {
	char text[256] = {};
	char filename[256] = "memo.txt";
	int len = 0;
	
	printf("�t�@�C���l�[�������߂Ă�������\n");
	scanf("%s", filename);

	input(text, &len);
	write(filename, text, len);
	read(filename);
	
	return 0;
}