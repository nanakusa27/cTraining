//Question03_05.cpp
//MasakiWatanabe

#include <iostream>
using namespace std;


class Pet {
protected:
    char name[80];
    int age;
    double height;
    double weight;
public:
    void show();
    void jumping(int h);
    void jumping(double h);
    int getAge();
    void setAge(int a);
    char* getName();
    void setName(char* n);
    double getHeight();
    void setHeight(double h);
    double getWeight();
    void setWeight(double w);
    Pet();
    Pet(char* n, int a, double h, double w);
};
Pet::Pet() {
    strcpy(name, "名無し");
    age = 0;
}
Pet::Pet(char* n, int a, double h, double w) {
    strcpy(name, n);
    age = a;
    height = h;
    weight = w;
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
    Dog(char* n, int a, char s, double h, double w);
};
Dog::Dog(char* n, int a, char s, double h, double w) :Pet(n, a, h, w) {
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
    Bird(char* n, int a, double h, double w);
};
Bird::Bird(char* n, int a, double h, double w) :Pet(n, a, h, w) {
}



int main(void) {
    cout << "---Dog---\n";
    Cat cat;
    char name[80];
    strcpy(name, "コタロウ");
    cat.setName(name);
    cat.setAge(7);
    cat.setHeight(27.2);
    cat.setWeight(4.3);
    cat.show();
    cat.jumping(33.5);

    cout << "---Cat---\n";
    char dname[80];
    strcpy(dname, "ポチ");
    Dog dog(dname, 5, 'M', 30.5, 27.2);
    dog.show();
    dog.jumping(25.5);


    cout << "---Bird---\n";
    char bn[80];
    strcpy(bn, "ピヨコ");
    Bird bird(bn, 3, 12, 0.45);
    bird.show();
    bird.jumping(70);


    return 0;
}