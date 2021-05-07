#include <iostream>
using namespace std;

class MyClass {
public:
    int my_data;
    MyClass();
    MyClass(int m);
    ~MyClass();
};

MyClass::MyClass() {
    my_data = -1;
    cout << "��{�N���X�̈����̂Ȃ��R���X�g���N�^\n";
}

MyClass::MyClass(int m) {
    my_data = m;
    cout << "��{�N���X�̈��������R���X�g���N�^\n";
}

MyClass::~MyClass() {
    cout << "��{�N���X�̃f�X�g���N�^\n";
}

class NewClass :public MyClass {
public:
    int new_data;
    NewClass();
    NewClass(int n, int m);
    ~NewClass();
};

NewClass::NewClass() {
    new_data = -1;
    cout << "�h���N���X�̈����̂Ȃ��R���X�g���N�^\n";
}

NewClass::NewClass(int n, int m) :MyClass(m) {
    new_data = n;
    cout << "�h���N���X�̈��������R���X�g���N�^\n";
}

NewClass::~NewClass() {
    cout << "�h���N���X�̃f�X�g���N�^\n";
}

int main() {
    NewClass obj1;
    cout << obj1.my_data << "\n";
    cout << obj1.new_data << "\n";
    cout << "****************\n";

    NewClass obj2(123, 456);
    cout << obj2.my_data << "\n";
    cout << obj2.new_data << "\n";

    return 0;
}