#include <stdio.h>

int main(void)
{
	int point = 50;
	
	printf("�e�X�g���ʁF%d�_\n�]���F", point);

	if (point >= 80) {
		printf("�D�G�I\n");
	} else if(point >= 50) {
		printf("���ϓI\n");
	} else if (point >= 30) {
		printf("�M���M�����i\n");
	} else {
		printf("�ǎ����K�v\n");
	}

	printf("����ꂳ�܂ł����B\n");

	return 0;
}
