#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	//メモリ領域を適当に確保
	char* pChar = (char*)malloc(sizeof(char) * 50);

	char str[] = "HelloWorld";
	printf("%sの長さ %d\n", str, strlen(str));

	printf("---文字を追加---\n");
	char addStr = '!';

	//strlen関数を使用した文字の追加
	*(str + strlen(str)) = addStr;
	*(str + strlen(str)) = '\0';
	printf("%sの長さ %d\n", str, strlen(str));

	//メモリの開放
	free(pChar);
}


//2021-04-23
//WatanabeMasaki
//Question11_01.c