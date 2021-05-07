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
    strcpy(name, "名無し");
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
void Pet::jumping(double h) {
    cout << name << "は" << h << "cm跳べます" << "\n";
}
void Pet::walk() {
    cout << footcnt << "本足で" << wStyle << "歩きます\n";
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
    Bird(char* n, int a, double h, double w, int f, char* ws);
};

Bird::Bird(char* n, int a, double h, double w, int f, char* ws) :Pet(n, a, h, w, f, ws) {
}



int main(void) {
    cout << "---Dog---\n";
    char name[80];
    strcpy(name, "コタロウ");
    char ws[80];
    strcpy(ws, "てくてく");
    Cat cat(name, 7, 27.2, 4.3, 4, ws);
    cat.show();
    cat.walk();
    cat.jumping(33.5);

    cout << "---Cat---\n";
    char dname[80];
    strcpy(dname, "ポチ");
    char dws[80];
    strcpy(dws, "軽やか");
    Dog dog(dname, 5, 'M', 30.5, 27.2, 4, dws);
    dog.show();
    dog.walk();
    dog.jumping(25.5);

    cout << "---Bird---\n";
    char bn[80];
    strcpy(bn, "ピヨコ");
    char bws[80];
    strcpy(bws, "ぴょこぴょこ");
    Bird bird(bn, 3, 12, 0.45, 2, bws);
    bird.show();
    bird.walk();
    bird.jumping(70);


    return 0;
}