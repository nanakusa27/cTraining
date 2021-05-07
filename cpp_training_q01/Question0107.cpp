#include <iostream>
#include "Cat.cpp"
#include "Catowner.cpp"
using namespace std;

int main(void) {
	Cat* cat;
	Catowner owner;
	strcpy(owner.name, "ŽR“c‘¾˜Y");
	cat = owner.getCat();
	owner.showOwnCatInfo(cat);

	return 0;
}