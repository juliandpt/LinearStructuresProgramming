#include <iostream>
#ifndef RECTA_H
#define RECTA_H

class Recta{
public:
    Recta(int, double, double, double, double);
    Recta(int, double, double, double, double, double, double);
    int getp1();
    int getp2();
    int getp3();
    int getv1();
    int getv2();
    int getv3();
    void imprmirRecta();

private:
    int idRecta, p1, p2, p3, v1, v2, v3;
    bool rectaDosDim;
};

#endif