#include <iostream>
#include "Cat.cpp"
#include "Catowner.cpp"
using namespace std;

int main(void) {
	Cat* cat;
	Catowner owner;
	strcpy(owner.name, "�R�c���Y");
	cat = owner.getCat();
	owner.showOwnCatInfo(cat);

	return 0;
}