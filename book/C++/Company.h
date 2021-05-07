#include <iostream>
#include <cstring>
using namespace std;

class Employee {
public:
    int number;
    char name[80];
    int salary;
    virtual void showData();
    Employee();
    Employee(int nu, const char* na, int sa);
};
void Employee::showData() {
    cout << "number" << number << "\n";
    cout << "name" << name << "\n";
    cout << "salary" << salary << "\n";
}
Employee::Employee() {
    number = 0;
    strcpy(name, "nuknown");
    salary = 150000;
}
Employee::Employee(int nu, const char* na, int sa) {
    number = nu;
    strcpy(name, na);
    salary = sa;
}

class Director :public Employee {
public:
    int stock;
    void showData();
    Director();
    Director(int nu, const char* na, int sa, int st);
};
void Director::showData() {
    Employee::showData();
    cout << "stock" << stock << "\n";
}
Director::Director() {
    stock = 100;
}
Director::Director(int nu, const char* na, int sa, int st) :Employee(nu, na, sa) {
    stock = st;
}

class Manager :public Employee {
public:
    int trableAllowance;
    void showData();
    Manager();
    Manager(int nu, const char* na, int sa, int tr);
};
void Manager::showData() {
    Employee::showData();
    cout << "travelAllowance" << trableAllowance << "\n";
}
Manager::Manager() {
    trableAllowance = 10000;
}
Manager::Manager(int nu, const char* na, int sa, int tr) :Employee(nu, na, sa) {
    trableAllowance = tr;
}

class Salesman :public Employee {
public:
    int sales;
    void showData();
    Salesman();
    Salesman(int nu, const char* na, int sa, int ss);
};
void Salesman::showData() {
    Employee::showData();
    cout << "sales" << sales << "\n";
}
Salesman::Salesman() {
    sales = 0;
}
Salesman::Salesman(int nu, const char* na, int sa, int ss) :Employee(nu, na, sa) {
    sales = ss;
}