#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass();
    ~MyClass();
};

MyClass::MyClass() {
    cout << "��{�N���X�̃R���X�g���N�^\n";
}

MyClass::~MyClass() {
    cout << "��{�N���X�̃f�X�g���N�^\n";
}

class NewClass :public MyClass {
public:
    NewClass();
    ~NewClass();
};

NewClass::NewClass() {
    cout << "�h���N���X�̃R���X�g���N�^\n";
}
NewClass::~NewClass() {
    cout << "�h���N���X�̃R���X�g���N�^\n";
}

int main() {
    NewClass obj;
    cout << "*****************\n";

    return 0;
}