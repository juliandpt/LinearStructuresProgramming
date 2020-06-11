#include <iostream>
#include "Recta.h"
#include "Plano.h"
#ifndef SOLVER_H
#define SOLVER_H

class Solver {
public:
    Solver();
    void pedirRectasEnPlano();
    void pedirRectasEnEspacio();
    void pedirDosPlanos();
    void pedirTresPlanos();
    void pedirRectaPlano();
    void calcularRangoRectasEnPlano(Recta, Recta);
    void calcularRangoRectasEnEspacio(Recta, Recta);
    void calcularRangoDosPlanos(Plano, Plano);
    void calcularRangoTresPlanos(Plano, Plano, Plano);
    void calcularEcuacionRectaPlano(Recta, Plano);
    void posicionRectas(int, int);
    void posicionDosPlanos(int, int);
    void posicionTresPlanos(int, int, Plano, Plano, Plano);
    void posicionRectaPlano(double, double);
};

#endif