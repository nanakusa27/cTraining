#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char String[1024];

int main(void)
{
	String answerNo;
	printf("���O�́H\n");
	printf("1:�~�i�g 2:�~�T�L 3:�c�o�T 4:�~�T�G\n");
	scanf("%s", answerNo);
	int n = atoi(answerNo);
	if (n == 2) {
		printf("�吳��\n");
	}
	else {
		printf("�c�O\n");
	}
	return 0;
}
