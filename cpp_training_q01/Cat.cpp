#include <iostream>
#include "Cat.h"
using namespace std;

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