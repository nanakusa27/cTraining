#include <iostream>
#include "Catowner.h"
using namespace std;

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