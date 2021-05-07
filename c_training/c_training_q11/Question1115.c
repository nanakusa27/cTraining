//20210426
// Question11_15.c
//MasakiWatanabe

#include <stdio.h>
#include <string.h>

int main(int args, char** argv)
{
	printf("第一引数:args=%d\n", args);
	printf("第二引数:argvの値 アドレス番地(argv)=%p\n", argv);
	printf("第二引数:*argvの値 アドレス番地(*argv)=%p\n", *argv);

	for (int i = 0;i < args;i++) {
		printf("%d番目\n", i);
		printf("アドレス番地:argv[%d]=%p\n", i, argv[i]);
		printf("値:argv[%d]=%s\n", i, argv[i]);
		printf("長さ:strlen(argv[%d])=%d\n", i, strlen(argv[i]));
	}

	return 0;
}