#include <iostream>
using namespace std;

class MyMessage {
public:
	void showMessage();
	void showMessage(const char* s);
	void showMessage(const char* a, int n);
};

void MyMessage::showMessage() {
	//\cout << "‚±‚ñ‚É‚¿‚ÍB" << "\n";
	showMessage("‚±‚ñ‚É‚¿‚ÍB", 1);
}

void MyMessage::showMessage(const char* s) {
	//cout << s << "\n";
	showMessage(s, 1);
}

void MyMessage::showMessage(const char* s, int n) {
	for (int i = 0;i < n;i++) {
		cout << "Message:";
		cout << s << "\n";
	}
}

int main() {
	MyMessage obj;

	obj.showMessage();
	obj.showMessage("‚¨Œ³‹C‚Å‚·‚©H");
	obj.showMessage("‹Zp•]˜_ŽÐ", 3);

	return 0;
}
