#include <iostream>
using namespace std;


class Pet {
protected:
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
    Pet();
    Pet(char* n, int a);
};
Pet::Pet() {
    strcpy(name, "名無し");
    age = 0;
}
Pet::Pet(char* n, int a) {
    strcpy(name, n);
    age = a;
}
int Pet::getAge() {
    return age;
}
void Pet::setAge(int a) {
    if (a >= 0) {
        age = a;
    }
    else {
        cout << "年齢に負の値は設定できません\n";
    }
}
char* Pet::getName() {
    return name;
}
void Pet::setName(char* n) {
    strcpy(name, n);
}
void Pet::show() {
    cout << "名前は" << name << "です" << "\n";
    cout << "年齢は" << age << "歳です" << "\n";
}
void Pet::jumping(int h) {
    cout << name << "は" << h << "cm跳べます" << "\n";
}
void Pet::jumping(double h) {
    cout << name << "は" << h << "cm跳べます" << "\n";
}

class Cat :public Pet {

};


class Dog :public Pet {
private:
    char size;
public:
    void show();
    char getSize();
    void setSize(char c);
    Dog(char* n, int a, char size);
};
Dog::Dog(char* n, int a, char s) :Pet(n, a) {
    size = s;
}
char Dog::getSize() {
    return size;
}
void Dog::setSize(char c) {
    size = c;
}


void Dog::show() {
    Pet::show();
    cout << "サイズは";
    switch (size) {
    case'S':
        cout << "小型犬\n";
        break;
    case'M':
        cout << "中型犬\n";
        break;
    case'L':
        cout << "大型犬\n";
        break;
    }
}


int main(void) {
    Cat cat;
    char name[80];
    strcpy(name, "コタロウ");
    cat.setName(name);
    cat.setAge(7);
    cat.show();
    cat.jumping(33.5);


    char dname[80];
    strcpy(dname, "ポチ");
    Dog dog(dname, 5, 'M');
    dog.show();
    dog.jumping(25.5);
    return 0;
}