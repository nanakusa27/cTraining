#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Roulette.c
//20210421
//MasakiWatanabe

typedef char String[1024];

int count = 0;

int main(void)
{	
	//����̃����o�[�݂̗̂��p
	//count�ɐl�������
	//�z��ary�ɖ��O�����
	count = 14;
	char ary[][1024] = { "���","���","�ؑ�","����","�V��","����","����","����","����","��{","�V��","���{","�q���","�n��" };

	//�����0���珸���ŏ�����
	int intAry[14] = { 0 };
	for (int i = 0;i < count;i++) {
		intAry[i] = i;
	}

	//����0���珇�ɂ������_���ɕ��ёւ�
	int tmp = 0;
	int random = 0;
	srand((unsigned)time(0UL));
	for (int i = 0;i < count;i++) {
		random = rand() % count;
		tmp = intAry[i];
		intAry[i] = intAry[random];
		intAry[random] = tmp;
	}

	//�����_���Ȑ����Y�����ɕ�����ary���o��
	for (int i = 0;i < count;i++) {
		printf("%2d�ԖځA%s����\n", i + 1, ary[intAry[i]]);
	}
	return 0;
}
