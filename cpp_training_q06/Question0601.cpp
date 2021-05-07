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

Pet::Pet() :Pet("Name", "������", 0) {
    cout << "Pet�N���X�F�R���X�g���N�^�@�����Ȃ�\n";
}
Pet::Pet(char* k) : Pet(k, "������", 0) {
    cout << "Pet�N���X�F�R���X�g���N�^�@����1��\n";
}
Pet::Pet(char* k, char* n, int a) : Pet(k, n, a) {
    cout << "Pet�N���X�F�R���X�g���N�^�@����3��\n";
}
void Pet::show() {
    cout << "---------" << kind << "----------\n";
    cout << "���O��" << name << "�ł�\n";
    cout << "�N���" << age << "�΂ł�\n";
}
Pet::~Pet() {
    cout << "Pet�N���X�F�f�X�g���N�^\n";
}

class Dog :public Pet {
public:
    Dog();
    Dog(char* n, int a);
    ~Dog();
};
Dog::Dog() :Pet("Dog") {
    cout << "Dog�N���X�F�R���X�g���N�^�@�����Ȃ�\n";
}
Dog::Dog(char*n,int a):Pet("Dog",n,a) {
    cout << "Dog�N���X�F�R���X�g���N�^�@����2��\n";
}
Dog::~Dog() {
    cout << "Dog�N���X�F�f�X�g���N�^\n";
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
    Dog dog("������", 5);
    petinfo = (Pet)dog;
    strcpy(ownername, "������������");
    cout << "PetOwner�N���X�F�R���X�g���N�^�@�����Ȃ�\n";
}
PetOwner::PetOwner(char* n, Pet* p) {
    petinfo = *p;
    strcpy(ownername, n);
    cout << "PetOwner�N���X�F�R���X�g���N�^�@����2��\n";
}
PetOwner::showOwnerInfo() {
    cout << "�������" << ownername << "�ł�\n";
    cout << "--�����Ă���y�b�g�̏��--\n";
    petinfo.show();
}
PetOwner::~PetOwner() {
    cout << "PetOwner�N���X�F�f�X�g���N�^\n";
}

int main(void) {
    cout << "--------------------Dog�I�u�W�F�N�g����\n";
    Dog dog("�|�`", 5);
    cout << "--------------------PetOwner�I�u�W�F�N�g����\n";
    PetOwner petOwner("�R�c���Y", &(Pet)dog);
    cout << "--------------------PetOwner.showOwnerInfo�Ăяo��\n";
    petOwner.showOwnerInfo();
    cout << "--------------------�v���O�����I��\n";
    
    return 0;
}