#include <iostream>
using namespace std;

class Book {
private:
	int page;

public:
	int getPage();
	void setPage(int p);
};

int Book::getPage() {
	return page;
}
void Book::setPage(int p) {
	if ((p >= 1) && (p <= 1000)) {
		page = p;
	}
 else {
		cout << "1�`1000��ݒ肵�Ă��������I" << "\n";
	}
}

int main(void) {
	Book bk;

	bk.setPage(123);
	cout << bk.getPage() << "\n";

	bk.setPage(30000);
	cout << bk.getPage() << "\n";

	return 0;
}