#include <stdio.h>

typedef char String[1024];

int main(void)
{

	typedef struct {
		int english;
		int math;
		int history;
		int science;
		int geography;
	} Score;

	Score i = { 0 };

	String input;
	printf("英語の点数を入力してください:\n");
	scanf("%s", input);
	i.english = atoi(input);

	printf("数学の点数を入力してください:\n");
	scanf("%s", input);
	i.math = atoi(input);

	printf("歴史の点数を入力してください:\n");
	scanf("%s", input);
	i.history = atoi(input);

	printf("科学の点数を入力してください:\n");
	scanf("%s", input);
	i.science = atoi(input);

	printf("地理の点数を入力してください:\n");
	scanf("%s", input);
	i.geography = atoi(input);

	int sum = i.english + i.math + i.history + i.science + i.geography;
	double avg = (double)sum / 5;

	printf("5科目の合計点：%d\n", sum);
	printf("5科目の平均点：%.1f\n", avg);

	printf("総合評価：");
	if (avg >= 80) {
		printf("優秀\n");
	}
	else if (avg>=50) {
		printf("平均的\n");
	}
	else if (avg >= 30) {
		printf("及第\n");
	}
	else {
		printf("追試が必要\n");
	}

	return 0;
}
