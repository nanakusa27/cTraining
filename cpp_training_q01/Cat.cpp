#include <iostream>
#include "Cat.h"
using namespace std;

void Cat::show() {
	cout << "名前は" << name << "です" << "\n";
	cout << "年齢は" << age << "歳です" << "\n";
}
void Cat::jumping(int h) {
	cout << name << "は" << h << "cm跳べます" << "\n";
}
void Cat::jumping(double h) {
	cout << name << "は" << h << "cm跳べます" << "\n";
}