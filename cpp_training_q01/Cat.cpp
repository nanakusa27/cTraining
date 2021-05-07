#include <iostream>
#include "Cat.h"
using namespace std;

void Cat::show() {
	cout << "–¼‘O‚Í" << name << "‚Å‚·" << "\n";
	cout << "”N—î‚Í" << age << "Î‚Å‚·" << "\n";
}
void Cat::jumping(int h) {
	cout << name << "‚Í" << h << "cm’µ‚×‚Ü‚·" << "\n";
}
void Cat::jumping(double h) {
	cout << name << "‚Í" << h << "cm’µ‚×‚Ü‚·" << "\n";
}