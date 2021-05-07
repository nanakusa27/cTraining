#include <iostream>
#include <cstring>
using namespace std;

class Employee {
public:
    int number;
    char name[80];
    int salary;

    void showData();
};

void Employee::showData() {
    cout << number << "\n";
    cout << name << "\n";
    cout << salary << "\n";
}

class Salesman :public Employee {
public:
    int sales;
    void showData();
};

void Salesman::showData() {
    //親のshowData()を呼び出し
    Employee::showData();
    cout << sales << "\n";
}

int main() {
    Salesman tanaka;

    tanaka.number = 1234;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salary = 200000;
    tanaka.sales = 100;
    tanaka.showData();

    return 0;
}