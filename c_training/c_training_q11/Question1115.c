//20210426
// Question11_15.c
//MasakiWatanabe

#include <stdio.h>
#include <string.h>

int main(int args, char** argv)
{
	printf("������:args=%d\n", args);
	printf("������:argv�̒l �A�h���X�Ԓn(argv)=%p\n", argv);
	printf("������:*argv�̒l �A�h���X�Ԓn(*argv)=%p\n", *argv);

	for (int i = 0;i < args;i++) {
		printf("%d�Ԗ�\n", i);
		printf("�A�h���X�Ԓn:argv[%d]=%p\n", i, argv[i]);
		printf("�l:argv[%d]=%s\n", i, argv[i]);
		printf("����:strlen(argv[%d])=%d\n", i, strlen(argv[i]));
	}

	return 0;
}