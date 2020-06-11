#include <iostream>
#include "Plano.h"
using namespace std;

Plano::Plano(int id, double a, double b, double c, double d) {
    A = a;
    B = b;
    C = c;
    D = d;
    idPlano = id;
}

double Plano::getA() {
    return A;
}

double Plano::getB() {
    return B;
}

double Plano::getC() {
    return C;
}

double Plano::getD() {
    return D;
}

void Plano::imprmirPlano() {
    cout << "\nPlano " << idPlano << ": " << endl;
    cout << A << "x + " << B << "y + " << C << "z + " << D << " = 0" << endl;
}