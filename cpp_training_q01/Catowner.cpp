#include <iostream>
#include "Catowner.h"
using namespace std;

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