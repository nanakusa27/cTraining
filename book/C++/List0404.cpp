#include <iostream>
#include <cstring>
using namespace std;

class Employee {
public:
    int number;
    char name[80];
    int salary;
    void showData();
    Employee();
    Employee(int nu, const char* na, int sa);
};

void Employee::showData() {
    cout << number << "\n";
    cout << name << "\n";
    cout << salary << "\n";
}

//引数を持たないコンストラクタの実装
Employee::Employee() {
    number = 0;
    strcpy(name, "unknown");
    salary = 150000;
}

//引数を持つコンストラクタの実装
Employee::Employee(int nu, const char* na, int sa) {
    number = nu;
    strcpy(name, na);
    salary = sa;
}

int main() {
    Employee someone;
    someone.showData();
    Employee tanaka(1234, "田中一郎", 20000);
    tanaka.showData();

    return 0;
}