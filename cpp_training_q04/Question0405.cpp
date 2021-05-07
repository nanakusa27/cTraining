#include <iostream>
using namespace std;

class Pet {
protected:
    char name[80];
    int age;
    double height;
    double weight;
    int footcnt;
    char wStyle[80];
public:
    void show();
    void jumping(double h);
    int getAge();
    void setAge(int a);
    char* getName();
    void setName(char* n);
    double getHeight();
    void setHeight(double h);
    double getWeight();
    void setWeight(double w);
    virtual void walk();
    Pet();
    Pet(char* n, int a, double h, double w, int f, char* ws);
};
Pet::Pet() {
    strcpy(name, "������");
    age = 0;
}
Pet::Pet(char* n, int a, double h, double w, int f, char* ws) {
    strcpy(name, n);
    age = a;
    height = h;
    weight = w;
    footcnt = f;
    strcpy(wStyle, ws);
}
int Pet::getAge() {
    return age;
}
void Pet::setAge(int a) {
    if (a >= 0) {
        age = a;
    }
    else {
        cout << "�N��ɕ��̒l�͐ݒ�ł��܂���\n";
    }
}
double Pet::getHeight() {
    return height;
}
void Pet::setHeight(double h) {
    height = h;
}
double Pet::getWeight() {
    return weight;
}
void Pet::setWeight(double w) {
    weight = w;
}
char* Pet::getName() {
    return name;
}
void Pet::setName(char* n) {
    strcpy(name, n);
}
void Pet::show() {
    cout << "���O��" << name << "�ł�" << "\n";
    cout << "�N���" << age << "�΂ł�" << "\n";
    cout << "�g����" << height << "cm�ł�" << "\n";
    cout << "�̏d��" << weight << "kg�ł�" << "\n";
}
void Pet::jumping(double h) {
    cout << name << "��" << h << "cm���ׂ܂�" << "\n";
}
void Pet::walk() {
    cout << footcnt << "�{����" << wStyle << "�����܂�\n";
}

class Cat :public Pet {
public:
    Cat(char* n, int a, double h, double w, int f, char* ws);
};
Cat::Cat(char* n, int a, double h, double w, int f, char* ws) :Pet(n, a, h, w, f, ws) {
}

class Dog :public Pet {
private:
    char size;
public:
    void show();
    char getSize();
    void setSize(char c);
    Dog(char* n, int a, char s, double h, double w, int f, char* ws);
};
Dog::Dog(char* n, int a, char s, double h, double w, int f, char* ws) :Pet(n, a, h, w, f, ws) {
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

class Bird :public Pet {
public:
    Bird(char* n, int a, double h, double w, int f, char* ws);
};

Bird::Bird(char* n, int a, double h, double w, int f, char* ws) :Pet(n, a, h, w, f, ws) {
}



int main(void) {
    cout << "---Dog---\n";
    char name[80];
    strcpy(name, "�R�^���E");
    char ws[80];
    strcpy(ws, "�Ă��Ă�");
    Cat cat(name, 7, 27.2, 4.3, 4, ws);
    cat.show();
    cat.walk();
    cat.jumping(33.5);

    cout << "---Cat---\n";
    char dname[80];
    strcpy(dname, "�|�`");
    char dws[80];
    strcpy(dws, "�y�₩");
    Dog dog(dname, 5, 'M', 30.5, 27.2, 4, dws);
    dog.show();
    dog.walk();
    dog.jumping(25.5);

    cout << "---Bird---\n";
    char bn[80];
    strcpy(bn, "�s���R");
    char bws[80];
    strcpy(bws, "�҂傱�҂傱");
    Bird bird(bn, 3, 12, 0.45, 2, bws);
    bird.show();
    bird.walk();
    bird.jumping(70);


    return 0;
}