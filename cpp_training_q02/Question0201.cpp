#include <iostream>
using namespace std;

class Cat {
private:
    char name[80];
    int age;
public:
    void show();
    void jumping(int h);
    void jumping(double h);
    int getAge();
    void setAge(int a);
    char* getName();
    void setName(char* n);
};
int Cat::getAge() {
    return age;
}
void Cat::setAge(int a) {
    age = a;
}
char* Cat::getName() {
    return name;
}
void Cat::setName(char* n) {
    strcpy(name, n);
}


void Cat::show() {
    cout << "���O��" << name << "�ł�" << "\n";
    cout << "�N���" << age << "�΂ł�" << "\n";
}
void Cat::jumping(int h) {
    cout << name << "��" << h << "cm���ׂ܂�" << "\n";
}
void Cat::jumping(double h) {
    cout << name << "��" << h << "cm���ׂ܂�" << "\n";
}


int main(void) {
    Cat cat;
    char name[80];
    strcpy(name, "�R�^���E");
    cat.setName(name);
    cat.setAge(7);
    cat.show();
    //cat.jumping(30);
    cat.jumping(33.5);

    return 0;
}