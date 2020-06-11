#include <iostream>
#ifndef PLANO_H
#define PLANO_H

class Plano{
public:
    Plano(int, double, double, double, double);
    double getA();
    double getB();
    double getC();
    double getD();
    void imprmirPlano();

private:
    int idPlano;
    double A, B, C, D;
};

#endif