#include <iostream>
using namespace std;

class Cat {
public:
	char name[80];
	int age;
	void show();
	void jumping(int h);
};

void Cat::show() {
	cout << "���O��" << name << "�ł�" << "\n";
	cout << "�N���" << age << "�΂ł�" << "\n";
}
void Cat::jumping(int h) {
	cout << name << "��" << h << "cm���ׂ܂�" << "\n";
}


int main(void) {
	Cat cat;
	strcpy(cat.name, "�R�^���E");
	cat.age = 7;
	//cat.show();
	cat.jumping(30);

	return 0;
}