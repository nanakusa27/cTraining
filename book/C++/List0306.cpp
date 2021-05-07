#include <iostream>
#include <cstring>
using namespace std;

//クラスの定義
class Employee {
public:
	int number;
	char name[80];
	int salary;
	void showData();
};

//メンバ関数の実装
void Employee::showData() {
	cout << number << "\n";
	cout << name << "\n";
	cout << salary << "\n";
}

//クラスに使う側のコード
int main() {
	//オブジェクトを作成する
	Employee tanaka;

	//メンバ変数にデータを設定する
	tanaka.number = 1234;
	strcpy(tanaka.name, "田中一郎");
	tanaka.salary = 200000;

	//メンバ関数を呼び出す
	tanaka.showData();

	return 0;
}