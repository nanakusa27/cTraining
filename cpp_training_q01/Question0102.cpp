#include <iostream>
using namespace std;

class Cat {
public:
	char name[80];
	int age;
	void show();
};

void Cat::show() {
	cout << "���O��" << name << "�ł�" << "\n";
	cout << "�N���" << age << "�΂ł�" << "\n";
}


int main(void) {
	Cat cat;
	strcpy(cat.name, "�R�^���E");
	cat.age = 7;
	cat.show();

	return 0;
}