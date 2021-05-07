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
	cout << "名前は" << name << "です" << "\n";
	cout << "年齢は" << age << "歳です" << "\n";
}
void Cat::jumping(int h) {
	cout << name << "は" << h << "cm跳べます" << "\n";
}


int main(void) {
	Cat cat;
	strcpy(cat.name, "コタロウ");
	cat.age = 7;
	//cat.show();
	cat.jumping(30);

	return 0;
}