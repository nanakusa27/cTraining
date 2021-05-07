#include <iostream>
using namespace std;
class Figure {
public: virtual void draw();
};
void Figure::draw() {};

class Circle :public Figure { public:void draw(); };
void Circle::draw() { cout << "�Z"; }

class Triangle :public Figure { public:void draw(); };
void Triangle::draw() { cout << "��"; }

class Rectangle :public Figure { public:void draw(); };
void Rectangle::draw() { cout << "�~"; }

int main(int args, char** argv) {
    if (args < 2) {
        cout << "0->�Z�A1->���A2->����\������v���O�����ł��B\n";
        cout << "�g�����@�v���O�������̌�ɁA012012012�@�Ɠ��͂����ꍇ\n";
        cout << "�Z�����Z�����Z����\n";
    }
    Figure* p[100];
    for (int i = 0;i < strlen(argv[1]);i++) {
        if (argv[1][i] == '0') {
            Circle c1;
            p[i] = &c1;
        }
        else if (argv[1][i] == '1') {
            Triangle t1;
            p[i] = &t1;
        }
        else if (argv[1][i] == '2') {
            Rectangle r1;
            p[i] = &r1;
        }
    }
    p[strlen(argv[1])] = NULL;
    int i;
    for (i = 0;p[i] != NULL;i++) {
        p[i]->draw();
    }
    cout << "\n";

    return 0;
}