#include <stdio.h>
#include <string.h>

int main(void)
{
	int iArray1[5] = { 12,34,56,78,90 };
	int iArray2[5] = { 12,34,56,78,90 };
	int* pArray;
	pArray = &iArray1[0];

	printf("iArray1, iArray2, pArrayのアドレス番地を表示\n");
	printf("iArray1=%p\n", &iArray1);
	printf("iArray2=%p\n", &iArray2);
	printf("pArray=%p\n", &pArray);

	printf("iArray1, iArray2, pArrayの値を表示\n");
	for (int i = 0;i < 5;i++) {
		printf("iArray1[%d]=%d, ", i, iArray1[i]);
		printf("iArray2[%d]=%d, ", i, iArray2[i]);
		printf("pArray[%d]=%d", i, pArray[i]);
		printf("\n");
	}

	printf("---iArray1とiArray2を等値比較(==演算子)---\n");
	if (iArray1 == iArray2) {
		printf("等しい");
	} else {
		printf("等しくない");
	}
	printf("\n");

	printf("---iArray1とpArrayを等値比較(==演算子)---\n");
	if (iArray1 == pArray) {
		printf("等しい");
	} else {
		printf("等しくない");
	}
	printf("\n");

	printf("---iArray2とpArrayを等値比較(==演算子)---\n");
	if (iArray2 == pArray) {
		printf("等しい");
	} else {
		printf("等しくない");
	}
	printf("\n");


	printf("---iArray1とiArray2を等価比較(memcmp)---\n");
	if (0==memcmp(iArray1, iArray2, sizeof(iArray1))) {
		printf("等しい");
	}
	else {
		printf("等しくない");
	}
	printf("\n");

	printf("---iArray1とpArrayを等価比較(memcmp)---\n");
	if (0==memcmp(iArray1, pArray, sizeof(iArray1))) {
		printf("等しい");
	}
	else {
		printf("等しくない");
	}
	printf("\n");

	printf("---iArray2とpArrayを等価比較(memcmp)---\n");
	if (0==memcmp(iArray2, pArray, sizeof(iArray1))) {
		printf("等しい");
	} else {
		printf("等しくない");
	}
	printf("\n");

}