#include <iostream>
#include "Recta.h"
using namespace std;

Recta::Recta(int id, double a, double b, double c, double d) {
    this->p1 = a;
    this->p2 = b;
    this->v1 = c;
    this->v2 = d;
    this->idRecta = id;
    rectaDosDim = true;
}

Recta::Recta(int id, double a, double b, double c, double d, double e, double f) {
    this->p1 = a;
    this->p2 = b;
    this->p3 = c;
    this->v1 = d;
    this->v2 = e;
    this->v3 = f;
    this->idRecta = id;
    rectaDosDim = false;
}

int Recta::getp1() {
    return p1;
}

int Recta::getp2() {
    return p2;
}

int Recta::getp3() {
    return p3;
}

int Recta::getv1() {
    return v1;
}

int Recta::getv2() {
    return v2;
}

int Recta::getv3() {
    return v3;
}

void Recta::imprmirRecta() {
    if (rectaDosDim) {
        cout << "\nRecta " << idRecta << ": " << endl;
        cout << "x = " << p1 << " + " << v1 << " lambda" << endl;
        cout << "y = " << p2 << " + " << v2 << " lambda" << endl;
    } else {
        cout << "\nRecta " << idRecta << ": " << endl;
        cout << "x = " << p1 << " + " << v1 << " lambda" << endl;
        cout << "y = " << p2 << " + " << v2 << " lambda" << endl;
        cout << "z = " << p3 << " + " << v3 << " lambda" << endl;
    }
}