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
	//特定のメンバーのみの利用
	//countに人数を入力
	//配列aryに名前を入力
	count = 14;
	char ary[][1024] = { "井上","大沼","木村","小林","齋藤","杉崎","妹尾","高井","高橋","瀧本","新沼","橋本","牧野内","渡辺" };

	//数列を0から昇順で初期化
	int intAry[14] = { 0 };
	for (int i = 0;i < count;i++) {
		intAry[i] = i;
	}

	//数列0から順にをランダムに並び替え
	int tmp = 0;
	int random = 0;
	srand((unsigned)time(0UL));
	for (int i = 0;i < count;i++) {
		random = rand() % count;
		tmp = intAry[i];
		intAry[i] = intAry[random];
		intAry[random] = tmp;
	}

	//ランダムな数列を添え字に文字列aryを出力
	for (int i = 0;i < count;i++) {
		printf("%2d番目、%sさん\n", i + 1, ary[intAry[i]]);
	}
	return 0;
}
