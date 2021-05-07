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
    cout << number << "\n";
    cout << name << "\n";
    cout << salary << "\n";
}

class Salesman :public Employee {
public:
    int sales;
    //void showAllData();
    void showData();
};

/*void Salesman::showAllData(){
    showData();
    cout << sales << "\n";
}*/
void Salesman::showData() {
    Employee::showData();
    cout << sales << "\n";
}

int main() {
    Salesman tanaka;

    tanaka.number = 1234;
    strcpy(tanaka.name, "�c����Y");
    tanaka.salary = 200000;
    tanaka.sales = 9999;
    //tanaka.showAllData();
    tanaka.showData();
}