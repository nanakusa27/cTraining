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
	printf("�p��̓_������͂��Ă�������:\n");
	scanf("%s", input);
	i.english = atoi(input);

	printf("���w�̓_������͂��Ă�������:\n");
	scanf("%s", input);
	i.math = atoi(input);

	printf("���j�̓_������͂��Ă�������:\n");
	scanf("%s", input);
	i.history = atoi(input);

	printf("�Ȋw�̓_������͂��Ă�������:\n");
	scanf("%s", input);
	i.science = atoi(input);

	printf("�n���̓_������͂��Ă�������:\n");
	scanf("%s", input);
	i.geography = atoi(input);

	int sum = i.english + i.math + i.history + i.science + i.geography;
	double avg = (double)sum / 5;

	printf("5�Ȗڂ̍��v�_�F%d\n", sum);
	printf("5�Ȗڂ̕��ϓ_�F%.1f\n", avg);

	printf("�����]���F");
	if (avg >= 80) {
		printf("�D�G\n");
	}
	else if (avg>=50) {
		printf("���ϓI\n");
	}
	else if (avg >= 30) {
		printf("�y��\n");
	}
	else {
		printf("�ǎ����K�v\n");
	}

	return 0;
}
