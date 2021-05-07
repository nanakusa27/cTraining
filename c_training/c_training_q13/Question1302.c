#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void input(char* text, int* len) {
	printf("ファイルに書き込む文字を入力してください\n");
	printf("改行を入力すると、ファイルへの書き込みを開始します\n");
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
	printf("ファイルへの書き込みが完了しました。\n");
}

void read(char* filename) {
	FILE* fp;
	int ch = 0;
	if ((fp = fopen(filename, "r")) == NULL) {
		exit(1);
	}
	printf("ファイルからの読み込み内容を表示します\n");
	while ((ch = fgets(fp)) == !EOF) {
		putchar((char)ch);
	}
	fclose(fp);
}

int main(void) {
	char text[256] = {};
	char filename[256] = "memo.txt";
	int len = 0;
	
	printf("ファイルネームを決めてください\n");
	scanf("%s", filename);

	input(text, &len);
	write(filename, text, len);
	read(filename);
	
	return 0;
}