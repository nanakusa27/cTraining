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
    Cat();
};
Cat::Cat() {
    strcpy(name, "������");
    age = 0;
}
int Cat::getAge() {
    return age;
}
void Cat::setAge(int a) {
    if (a >= 0) {
        age = a;
    }
    else {
        cout << "�N��ɕ��̒l�͐ݒ�ł��܂���\n";
    }
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

class Dog {
private:
    char name[80];
    int age;
    char size;
public:
    void show();
    void jumping(int h);
    void jumping(double h);
    int getAge();
    void setAge(int a);
    char* getName();
    void setName(char* n);
    char getSize();
    void setSize(char c);
    Dog();
};
Dog::Dog() {
    strcpy(name, "������");
    age = 0;
}
int Dog::getAge() {
    return age;
}
void Dog::setAge(int a) {
    if (a >= 0) {
        age = a;
    }
    else {
        cout << "�N��ɕ��̒l�͐ݒ�ł��܂���\n";
    }
}
char* Dog::getName() {
    return name;
}
void Dog::setName(char* n) {
    strcpy(name, n);
}
char Dog::getSize() {
    return size;
}
void Dog::setSize(char c) {
    size = c;
}


void Dog::show() {
    cout << "���O��" << name << "�ł�" << "\n";
    cout << "�N���" << age << "�΂ł�" << "\n";
    cout << "�T�C�Y��";
    switch (size) {
    case'S':
        cout << "���^��\n";
        break;
    case'M':
        cout << "���^��\n";
        break;
    case'L':
        cout << "��^��\n";
        break;
    }
}
void Dog::jumping(int h) {
    cout << name << "��" << h << "cm���ׂ܂�" << "\n";
}
void Dog::jumping(double h) {
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


    Dog dog;
    char dname[80];
    strcpy(dname, "�|�`");
    dog.setName(dname);
    dog.setAge(5);
    dog.setSize('M');
    dog.show();
    dog.jumping(25.5);
    return 0;
}