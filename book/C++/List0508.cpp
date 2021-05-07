#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass();
    ~MyClass();
};

MyClass::MyClass() {
    cout << "基本クラスのコンストラクタ\n";
}

MyClass::~MyClass() {
    cout << "基本クラスのデストラクタ\n";
}

class NewClass :public MyClass {
public:
    NewClass();
    ~NewClass();
};

NewClass::NewClass() {
    cout << "派生クラスのコンストラクタ\n";
}
NewClass::~NewClass() {
    cout << "派生クラスのコンストラクタ\n";
}

int main() {
    NewClass obj;
    cout << "*****************\n";

    return 0;
}