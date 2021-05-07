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
    cout << "名前は" << name << "です" << "\n";
    cout << "年齢は" << age << "歳です" << "\n";
}
void Cat::jumping(int h) {
    cout << name << "は" << h << "cm跳べます" << "\n";
}
void Cat::jumping(double h) {
    cout << name << "は" << h << "cm跳べます" << "\n";
}


int main(void) {
    Cat cat;
    char name[80];
    strcpy(name, "コタロウ");
    cat.setName(name);
    cat.setAge(7);
    cat.show();
    //cat.jumping(30);
    cat.jumping(33.5);

    return 0;
}