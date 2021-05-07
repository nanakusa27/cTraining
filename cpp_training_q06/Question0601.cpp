#include <iostream>
using namespace std;
class Pet {
protected:
    char kind[64];
    char name[256];
    int age;
public:
    virtual void show();
    Pet();
    Pet(char* k);
    Pet(char* k, char* n, int a);
    ~Pet();
};

Pet::Pet() :Pet("Name", "名無し", 0) {
    cout << "Petクラス：コンストラクタ　引数なし\n";
}
Pet::Pet(char* k) : Pet(k, "名無し", 0) {
    cout << "Petクラス：コンストラクタ　引数1つ\n";
}
Pet::Pet(char* k, char* n, int a) : Pet(k, n, a) {
    cout << "Petクラス：コンストラクタ　引数3つ\n";
}
void Pet::show() {
    cout << "---------" << kind << "----------\n";
    cout << "名前は" << name << "です\n";
    cout << "年齢は" << age << "歳です\n";
}
Pet::~Pet() {
    cout << "Petクラス：デストラクタ\n";
}

class Dog :public Pet {
public:
    Dog();
    Dog(char* n, int a);
    ~Dog();
};
Dog::Dog() :Pet("Dog") {
    cout << "Dogクラス：コンストラクタ　引数なし\n";
}
Dog::Dog(char*n,int a):Pet("Dog",n,a) {
    cout << "Dogクラス：コンストラクタ　引数2つ\n";
}
Dog::~Dog() {
    cout << "Dogクラス：デストラクタ\n";
}

class PetOwner {
private:
    char ownername[256];
    Pet petinfo;
public:
    PetOwner();
    PetOwner(char* n, Pet* p);
    void showOwnerInfo();
    ~PetOwner();
};
PetOwner::PetOwner() {
    Dog dog("名無し", 5);
    petinfo = (Pet)dog;
    strcpy(ownername, "名無し飼い主");
    cout << "PetOwnerクラス：コンストラクタ　引数なし\n";
}
PetOwner::PetOwner(char* n, Pet* p) {
    petinfo = *p;
    strcpy(ownername, n);
    cout << "PetOwnerクラス：コンストラクタ　引数2つ\n";
}
PetOwner::showOwnerInfo() {
    cout << "飼い主は" << ownername << "です\n";
    cout << "--買っているペットの情報--\n";
    petinfo.show();
}
PetOwner::~PetOwner() {
    cout << "PetOwnerクラス：デストラクタ\n";
}

int main(void) {
    cout << "--------------------Dogオブジェクト生成\n";
    Dog dog("ポチ", 5);
    cout << "--------------------PetOwnerオブジェクト生成\n";
    PetOwner petOwner("山田太郎", &(Pet)dog);
    cout << "--------------------PetOwner.showOwnerInfo呼び出し\n";
    petOwner.showOwnerInfo();
    cout << "--------------------プログラム終了\n";
    
    return 0;
}