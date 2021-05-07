#include <iostream>
#include <cstring>
using namespace std;

class Employee {
public:
    int number;
    char name[80];
    int salary;
protected:
    void showData();
};
void Employee::showData() {
    cout << "number" << number << "\n";
    cout << "name" << name << "\n";
    cout << "salary" << salary << "\n";
}

class Director :public Employee {
public:
    int stock;
    void showData();
};
void Director::showData() {
    Employee::showData();
    cout <<"stock"<< stock << "\n";
}

class Manager :public Employee {
public:
    int travelAllowance;
    void showData();
};
void Manager::showData(){
    Employee::showData();
    cout << "trabelAllowance" << travelAllowance << "\n";
}

class Salesman :public Employee {
public:
    int sales;
    void showData();
};
void Salesman::showData() {
    Employee::showData();
    cout << "sales" << sales << "\n";
}

int main() {
    Director y;
    y.number = 1111;
    strcpy(y.name, "役員一郎");
    y.salary = 500000;
    y.stock = 1000;
    y.showData();

    Manager k;
    k.number = 2222;
    strcpy(k.name, "課長次郎");
    k.salary = 350000;
    k.travelAllowance = 10000;
    k.showData();

    Salesman e;
    e.number = 3333;
    strcpy(e.name, "営業三郎");
    e.salary = 250000;
    e.sales = 1234;
    e.showData();

    return 0;
}