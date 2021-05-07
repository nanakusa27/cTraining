#include <stdio.h>

typedef char String[1024];

int mathMaxCheck(int x, int y)
{
	int check = 0;
	if (x > y) {
		check = 1;
	} else if (x < y) {
		check = 3;
	} else {
		check = 2;
	}
	return check;
}

int main(void)
{
	printf("2桁の数値を2回入力してください\n");
	String input;
	printf("1回目：");
	scanf("%s", input);
	int ipt1 = atoi(input);
	printf("2回目：");
	scanf("%s", input);
	int ipt2 = atoi(input);

	printf("数値の比較をします\n");
	int check = mathMaxCheck(ipt1, ipt2);
	switch (check) {
	case 1:
		printf("1回目と2回目で大きい値は%dです", ipt1);
		break;
	case 2:
		printf("1回目と2回目の値は、%dで同じ値です", ipt1);
		break;
	case 3:
		printf("1回目と2回目で大きい値は%dです", ipt2);
		break;
	}
	

	return 0;
}
