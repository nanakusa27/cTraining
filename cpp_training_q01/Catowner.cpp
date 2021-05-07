#include <iostream>
#include "Catowner.h"
using namespace std;

void Catowner::showOwnCatInfo(Cat* cat) {
	cout << "éîÇ¢éÂÇÕ" << name << "Ç≈Ç∑\n";
	cout << "éîÇ¢îLÇÃèÓïÒ\n";
	cat->show();
}
Cat* Catowner::getCat() {
	static Cat cat;
	strcpy(cat.name, "ÉRÉ^ÉçÉE");
	cat.age = 7;
	return &cat;
}