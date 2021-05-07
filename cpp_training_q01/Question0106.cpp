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

class Catowner {
public:
	char name[80];
	void showOwnCatInfo(Cat* cat);
	Cat* Catowner::getCat();
};

void Catowner::showOwnCatInfo(Cat* cat) {
	cout << "飼い主は" << name << "です\n";
	cout << "飼い猫の情報\n";
	cat->show();
}
Cat* Catowner::getCat() {
	static Cat cat;
	strcpy(cat.name, "コタロウ");
	cat.age = 7;
	return &cat;
}


int main(void) {
	Cat* cat;
	Catowner owner;
	strcpy(owner.name, "山田太郎");
	cat = owner.getCat();
	owner.showOwnCatInfo(cat);

	return 0;
}