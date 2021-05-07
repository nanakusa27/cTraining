#include <stdio.h>
#include <string.h>

int main(void)
{
	typedef struct {
		int iSubNum;
	}tagTestSubStruct;

	typedef struct {
		char chMoji;
		int iNum;
		tagTestSubStruct subStruct;
	}tagTestStruct;

	tagTestStruct structOrg = {
		.chMoji = 'A',
		.iNum = 0,
		.subStruct = {
			.iSubNum = 9
		}
	};

	tagTestStruct structCpy = {
		.chMoji = 'Z',
		.iNum = 5,
		.subStruct = {
			.iSubNum = 4
		}
	};

	printf("---�R�s�[�O---\n");
	printf("<<<�R�s�[��>>>\n");
	printf("structOrg.chMoji\t%c\n", structOrg.chMoji);
	printf("structOrg.iNum\t%d\n", structOrg.iNum);
	printf("structOrg.subStruct.iSubNum\t%d\n", structOrg.subStruct.iSubNum);
	printf("structOrg�A�h���X�Ԓn\t%p\n", &structOrg);

	printf("<<<�R�s�[��>>>\n");
	printf("structCpy.chMoji\t%c\n", structCpy.chMoji);
	printf("structCpy.iNum\t%d\n", structOrg.iNum);
	printf("structCpy.subStruct.iSubNum\t%d\n", structCpy.subStruct.iSubNum);
	printf("structCpy�A�h���X�Ԓn\t%p\n", &structCpy);

	memcpy(&structCpy, &structOrg, sizeof(structOrg));

	printf("---�R�s�[��---\n");
	printf("<<<�R�s�[��>>>\n");
	printf("structOrg.chMoji\t%c\n", structOrg.chMoji);
	printf("structOrg.iNum\t%d\n", structOrg.iNum);
	printf("structOrg.subStruct.iSubNum\t%d\n", structOrg.subStruct.iSubNum);
	printf("structOrg�A�h���X�Ԓn\t%p\n", &structOrg);

	printf("<<<�R�s�[��>>>\n");
	printf("structCpy.chMoji\t%c\n", structCpy.chMoji);
	printf("structCpy.iNum\t%d\n", structOrg.iNum);
	printf("structCpy.subStruct.iSubNum\t%d\n", structCpy.subStruct.iSubNum);
	printf("structCpy�A�h���X�Ԓn\t%p\n", &structCpy);

}