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


int main(void) {
	Cat cat[3];
	strcpy(cat[0].name, "�R�^���E");
	cat[0].age = 7;
	strcpy(cat[1].name, "�^���E");
	cat[1].age = 12;
	strcpy(cat[2].name, "�n�i");
	cat[2].age = 3;
	
	for (int i = 0;i < 3;i++) {
		cout << i << "�C��\n";
		cat[i].show();
		cout << "\n";
	}
	cout << "3�C�̃W�����v��\n";
	cat[0].jumping(33.5);
	cat[1].jumping(15);
	cat[2].jumping(40);

	return 0;
}