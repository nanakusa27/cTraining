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
	cout << "���O��" << name << "�ł�" << "\n";
	cout << "�N���" << age << "�΂ł�" << "\n";
}
void Cat::jumping(int h) {
	cout << name << "��" << h << "cm���ׂ܂�" << "\n";
}
void Cat::jumping(double h) {
	cout << name << "��" << h << "cm���ׂ܂�" << "\n";
}

class Catowner {
public:
	char name[80];
	void showOwnCatInfo(Cat* cat);
	Cat* Catowner::getCat();
};

void Catowner::showOwnCatInfo(Cat* cat) {
	cout << "�������" << name << "�ł�\n";
	cout << "�����L�̏��\n";
	cat->show();
}
Cat* Catowner::getCat() {
	static Cat cat;
	strcpy(cat.name, "�R�^���E");
	cat.age = 7;
	return &cat;
}


int main(void) {
	Cat* cat;
	Catowner owner;
	strcpy(owner.name, "�R�c���Y");
	cat = owner.getCat();
	owner.showOwnCatInfo(cat);

	return 0;
}