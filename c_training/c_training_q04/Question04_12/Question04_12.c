#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main(void)
{
	srand((unsigned)time(0UL));
	int r = rand() % 10 +1;
	int i = 1;
	String inputStr;
	int input;

	while (1) {
		printf("%d��ڂ̃`�������W�I\n", i);
		printf("1�`10�̐��l����͂��Ă�������\n");
		scanf("%s", inputStr);
		input = atoi(inputStr);

		if (r == input) {
			printf("������I�I�F�l��%d�ł����B\n", r);
			printf("�`�������W�񐔂́A%d�ł����B\n", i);
			break;
		}
		i++;
	}
	return 0;
}
