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
    double jmp;
public:
    void show();
    void jumping();
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
    Pet(char* n, int a, double h, double w, double jump, int f, char* ws);
};
Pet::Pet() {
    strcpy(name, "名無し");
    age = 0;
}
Pet::Pet(char* n, int a, double h, double w, double jump, int f, char* ws) {
    strcpy(name, n);
    age = a;
    height = h;
    weight = w;
    footcnt = f;
    strcpy(wStyle, ws);
    jmp = jump;
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
    cout << "名前は" << name << "です" << "\n";
    cout << "年齢は" << age << "歳です" << "\n";
    cout << "身長は" << height << "cmです" << "\n";
    cout << "体重は" << weight << "kgです" << "\n";
}
void Pet::jumping() {
    cout << name << "は" << jmp << "cm跳べます" << "\n";
}
void Pet::walk() {
    cout << footcnt << "本足で" << wStyle << "歩きます\n";
}

class Cat :public Pet {
public:
    Cat(char* n, int a, double h, double w, double jump, int f, char* ws);
};
Cat::Cat(char* n, int a, double h, double w, double jump, int f, char* ws) :Pet(n, a, h, w, jump, f, ws) {
}

class Dog :public Pet {
private:
    char size;
public:
    void show();
    char getSize();
    void setSize(char c);
    Dog(char* n, int a, char s, double h, double w, double jump, int f, char* ws);
};
Dog::Dog(char* n, int a, char s, double h, double w, double jump, int f, char* ws) :Pet(n, a, h, w, jump, f, ws) {
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

class Bird :public Pet {
public:
    Bird(char* n, int a, double h, double w, double jump, int f, char* ws);
};

Bird::Bird(char* n, int a, double h, double w, double jump, int f, char* ws) :Pet(n, a, h, w, jump, f, ws) {
}



int main(void) {

    char petType[3][80] = { "Dog","Cat","Bird" };
    Pet* p[3];

    Dog dog((char*)"ポチ", 5, 'M', 30.5, 27.2, 25.5, 4, (char*)"軽やか");
    p[0] = &dog;

    Cat cat((char*)"コタロウ", 7, 27.2, 4.3, 33.5, 4, (char*)"てくてく");
    p[1] = &cat;

    Bird bird((char*)"ピヨコ", 3, 12, 0.45, 70, 2, (char*)"ぴょこぴょこ");
    p[2] = &bird;

    for (int i = 0;i < 3;i++) {
        cout << "---" << petType[i] << "---\n";
        p[i]->show();
        p[i]->walk();
        p[i]->jumping();
    }

    return 0;
}