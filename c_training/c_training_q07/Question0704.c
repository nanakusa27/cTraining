#include <stdio.h>

typedef char String[1024];

int main(void)
{
	int ary[10] = { 31,41,59,26,53,58,97,93,23,84 };
	printf("10～99の2桁の数値を入力してください：");
	String input;
	scanf("%s", input);
	int ipt = atoi(input);

	int cnt = 0;
	for (int i = 0;i < 10;i++) {
		if (ipt == ary[i]) {
			cnt = i;
			break;
		}
	}
	if (cnt == 0) {
		printf("%dは、見つかりませんでした。\n", ipt);
	}
	else {
		printf("%dは、%dの位置に見つかりました。\n", ipt, cnt);
	}
	
	return 0;
}
