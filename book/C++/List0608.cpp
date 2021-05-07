#include <iostream>
using namespace std;

class Figure {
public:
    virtual void draw() = 0;
};

class Circle :public Figure {
public:
    void draw();
};
void Circle::draw() {
    cout << "�Z";
}

class Triangle :public Figure {
public:
    void draw();
};
void Triangle::draw() {
    cout << "��";
};

class Rectangle :public Figure {
public:
    void draw();
};
void Rectangle::draw() {
    cout << "��";
};

int main() {
    Figure* p[100];

    Circle c1;
    p[0] = &c1;
    Triangle t1, t2;
    p[1] = &t1;
    p[2] = &t2;
    Rectangle r1, r2, r3;
    p[3] = &r1;
    p[4] = &r2;
    p[5] = &r3;
    p[6] = NULL;

    int i;
    for (i = 0;p[i] != NULL;i++) {
        p[i] -> draw();
    }
    cout << "\n";

    return 0;
}
