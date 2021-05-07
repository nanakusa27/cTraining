#include <iostream>
using namespace std;

class Cat {
public:
	char name[80];
	int age;
	void show();
	void jumping(int h);
	void jumping(double h);
};

void Cat::show() {
	cout << "名前は" << name << "です" << "\n";
	cout << "年齢は" << age << "歳です" << "\n";
}
void Cat::jumping(int h) {
	cout << name << "は" << h << "cm跳べます" << "\n";
}
void Cat::jumping(double h) {
	cout << name << "は" << h << "cm跳べます" << "\n";
}


int main(void) {
	Cat cat[3];
	strcpy(cat[0].name, "コタロウ");
	cat[0].age = 7;
	strcpy(cat[1].name, "タロウ");
	cat[1].age = 12;
	strcpy(cat[2].name, "ハナ");
	cat[2].age = 3;
	
	for (int i = 0;i < 3;i++) {
		cout << i << "匹目\n";
		cat[i].show();
		cout << "\n";
	}
	cout << "3匹のジャンプ力\n";
	cat[0].jumping(33.5);
	cat[1].jumping(15);
	cat[2].jumping(40);

	return 0;
}