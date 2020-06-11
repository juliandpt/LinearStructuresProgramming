#include <iostream>
using namespace std;
#include "Solver.h"

Solver::Solver() {
}

//Parte DAVID MERLE
void Solver::pedirRectasEnPlano() {
    char opt;
    bool exit = false;
    bool correct = false;
    while(!exit){
        double p1, p2, v1, v2;
        cout << "\nIntroduce la primera recta de forma parametrica, es decir: " << endl;
        cout << "x = p1 + v1 lambda" << endl;
        cout << "y = p2 + v2 lambda" << endl;
        cout << "valor de p1: " << endl;
        cin >> p1;
        cout << "valor de p2: " << endl;
        cin >> p2;
        cout << "valor de v1: " << endl;
        cin >> v1;
        cout << "valor de v2: " << endl;
        cin >> v2;
        Recta* recta1 = new Recta(1, p1, p2, v1, v2);

        cout << "\nIntroduce la segunda recta de forma parametrica, es decir: " << endl;
        cout << "x = p1 + v1 lambda" << endl;
        cout << "y = p2 + v2 lambda" << endl;
        cout << "valor de p1: " << endl;
        cin >> p1;
        cout << "valor de p2: " << endl;
        cin >> p2;
        cout << "valor de v1: " << endl;
        cin >> v1;
        cout << "valor de v2: " << endl;
        cin >> v2;
        Recta* recta2 = new Recta(2, p1, p2, v1, v2);

        recta1->imprmirRecta();
        recta2->imprmirRecta();

        calcularRangoRectasEnPlano(*recta1, *recta2);
        correct = false;

        while(!correct){
            cout<<"Quiere volver a estudiar RECTA-RECTA EN EL PLANO?[y/n]: "<<endl;
            cin>>opt;
            if(opt == 'y'){
                correct = true;
            }else if(opt == 'n'){
                correct = true;
                exit = true;
            }else{
                cout<<"Introduzca bien el caracter\n";
            }
        }
    }

}

//Parte ALFONSO VEGA
void Solver::pedirRectasEnEspacio() {
    char opt;
    bool exit = false;
    bool correct = false;
    while(!exit){
        double p1, p2, p3, v1, v2, v3;
        cout << "\nIntroduce la primera recta de forma parametrica, es decir: " << endl;
        cout << "x = p1 + v1 lambda" << endl;
        cout << "y = p2 + v2 lambda" << endl;
        cout << "z = p3 + v3 lambda" << endl;
        cout << "valor de p1: " << endl;
        cin >> p1;
        cout << "valor de p2: " << endl;
        cin >> p2;
        cout << "valor de p3: " << endl;
        cin >> p3;
        cout << "valor de v1: " << endl;
        cin >> v1;
        cout << "valor de v2: " << endl;
        cin >> v2;
        cout << "valor de v3: " << endl;
        cin >> v3;
        Recta* recta1 = new Recta(1, p1, p2, p3, v1, v2, v3);

        cout << "\nIntroduce la primera recta de forma parametrica, es decir: " << endl;
        cout << "x = p1 + v1 lambda" << endl;
        cout << "y = p2 + v2 lambda" << endl;
        cout << "y = p3 + v3 lambda" << endl;
        cout << "valor de p1: " << endl;
        cin >> p1;
        cout << "valor de p2: " << endl;
        cin >> p2;
        cout << "valor de p3: " << endl;
        cin >> p3;
        cout << "valor de v1: " << endl;
        cin >> v1;
        cout << "valor de v2: " << endl;
        cin >> v2;
        cout << "valor de v3: " << endl;
        cin >> v3;
        Recta* recta2 = new Recta(2, p1, p2, p3, v1, v2, v3);

        recta1->imprmirRecta();
        recta2->imprmirRecta();

        calcularRangoRectasEnEspacio(*recta1, *recta2);
        correct = false;

        while(!correct){
            cout<<"Quiere volver a estudiar RECTA-RECTA EN EL ESPACIO?[y/n]: "<<endl;
            cin>>opt;
            if(opt == 'y'){
                correct = true;
            }else if(opt == 'n'){
                correct = true;
                exit = true;
            }else{
                cout<<"Introduzca bien el caracter\n";
            }
        }
    }

}

//Parte CARLOS VALLE
void Solver::pedirDosPlanos() {
    char opt;
    bool exit = false;
    bool correct = false;
    while(!exit){
        double A, B, C, D;
        cout << "\nIntroduce el primer plano de forma implicita, es decir: " << endl;
        cout << "A x + B y + C z + D = 0" << endl;
        cout << "valor de A: " << endl;
        cin >> A;
        cout << "valor de B: " << endl;
        cin >> B;
        cout << "valor de C: " << endl;
        cin >> C;
        cout << "valor de D: " << endl;
        cin >> D;
        Plano* plano1 = new Plano(1, A, B, C, D);

        cout << "\nIntroduce el segundo plano de forma implicita, es decir: " << endl;
        cout << "A x + B y + C z + D = 0" << endl;
        cout << "valor de A: " << endl;
        cin >> A;
        cout << "valor de B: " << endl;
        cin >> B;
        cout << "valor de C: " << endl;
        cin >> C;
        cout << "valor de D: " << endl;
        cin >> D;
        Plano* plano2 = new Plano(2, A, B, C, D);

        plano1->imprmirPlano();
        plano2->imprmirPlano();

        calcularRangoDosPlanos(*plano1, *plano2);
        correct = false;

        while(!correct){
            cout<<"Quiere volver a estudiar PLANO-PLANO DOS PLANOS?[y/n]: "<<endl;
            cin>>opt;
            if(opt == 'y'){
                correct = true;
            }else if(opt == 'n'){
                correct = true;
                exit = true;
            }else{
                cout<<"Introduzca bien el caracter\n";
            }
        }
    }

}

//Parte JULIAN DE PABLO
void Solver::pedirTresPlanos() {
    char opt;
    bool exit = false;
    bool correct = false;
    while(!exit){
        double A, B, C, D;
        cout << "\nIntroduce el primer plano de forma implicita, es decir: " << endl;
        cout << "A x + B y + C z + D = 0" << endl;
        cout << "valor de A: " << endl;
        cin >> A;
        cout << "valor de B: " << endl;
        cin >> B;
        cout << "valor de C: " << endl;
        cin >> C;
        cout << "valor de D: " << endl;
        cin >> D;
        Plano* plano1 = new Plano(1, A, B, C, D);

        cout << "\nIntroduce el primer plano de forma implicita, es decir: " << endl;
        cout << "A x + B y + C z + D = 0" << endl;
        cout << "valor de A: " << endl;
        cin >> A;
        cout << "valor de B: " << endl;
        cin >> B;
        cout << "valor de C: " << endl;
        cin >> C;
        cout << "valor de D: " << endl;
        cin >> D;
        Plano* plano2 = new Plano(2, A, B, C, D);

        cout << "\nIntroduce el primer plano de forma implicita, es decir: " << endl;
        cout << "A x + B y + C z + D = 0" << endl;
        cout << "valor de A: " << endl;
        cin >> A;
        cout << "valor de B: " << endl;
        cin >> B;
        cout << "valor de C: " << endl;
        cin >> C;
        cout << "valor de D: " << endl;
        cin >> D;
        Plano* plano3 = new Plano(3, A, B, C, D);

        plano1->imprmirPlano();
        plano2->imprmirPlano();
        plano3->imprmirPlano();

        calcularRangoTresPlanos(*plano1, *plano2, *plano3);
        correct = false;

        while(!correct){
            cout<<"Quiere volver a estudiar PLANO-PLANO TRES PLANOS?[y/n]: "<<endl;
            cin>>opt;
            if(opt == 'y'){
                correct = true;
            }else if(opt == 'n'){
                correct = true;
                exit = true;
            }else{
                cout<<"Introduzca bien el caracter\n";
            }
        }
    }
}

//Parte JULIAN DE PABLO
void Solver::pedirRectaPlano() {
    char opt;
    bool exit = false;
    bool correct = false;
    while(!exit){
        double p1, p2, p3, v1, v2, v3;
        double A, B, C, D;
        cout << "\nIntroduce la recta de forma parametrica, es decir: " << endl;
        cout << "x = p1 + v1 lambda" << endl;
        cout << "y = p2 + v2 lambda" << endl;
        cout << "z = p3 + v3 lambda" << endl;
        cout << "valor de p1: " << endl;
        cin >> p1;
        cout << "valor de p2: " << endl;
        cin >> p2;
        cout << "valor de p3: " << endl;
        cin >> p3;
        cout << "valor de v1: " << endl;
        cin >> v1;
        cout << "valor de v2: " << endl;
        cin >> v2;
        cout << "valor de v3: " << endl;
        cin >> v3;
        Recta* recta = new Recta(1, p1, p2, p3, v1, v2, v3);

        cout << "\nIntroduce el plano de forma implicita, es decir: " << endl;
        cout << "A x + B y + C z + D = 0" << endl;
        cout << "valor de A: " << endl;
        cin >> A;
        cout << "valor de B: " << endl;
        cin >> B;
        cout << "valor de C: " << endl;
        cin >> C;
        cout << "valor de D: " << endl;
        cin >> D;
        Plano* plano = new Plano(1, A, B, C, D);

        recta->imprmirRecta();
        plano->imprmirPlano();

        calcularEcuacionRectaPlano(*recta, *plano);
        correct = false;

        while(!correct){
            cout<<"Quiere volver a estudiar RECTA-PLANNO?[y/n]: "<<endl;
            cin>>opt;
            if(opt == 'y'){
                correct = true;
            }else if(opt == 'n'){
                correct = true;
                exit = true;
            }else{
                cout<<"Introduzca bien el caracter\n";
            }
        }
    }

}

//CALCULO DE LOS RANGOS

//Parte DAVID MERLE
void Solver::calcularRangoRectasEnPlano(Recta recta1, Recta recta2) {
    int rgm = 0, rgM = 0;
    if ((recta1.getv1()*(-recta2.getv2()) - recta1.getv2()*(-recta2.getv1())) != 0)
    {
        rgm = 2;
    } else {
        rgm = 1;
    }

    if ((recta1.getv1()*(recta2.getp2()-recta1.getp2()) - recta2.getv2()*(recta2.getp1()-recta1.getp1())) != 0 ||
        (recta2.getp1()-recta1.getp1())*(-recta2.getv2()) - (recta2.getp2()-recta1.getp2())*(-recta2.getv1()) != 0)
    {
        rgM = 2;
    } else {
        rgM = 1;
    }

    posicionRectas(rgm, rgM);
}

//Parte ALFONSO VEGA
void Solver::calcularRangoRectasEnEspacio(Recta recta1, Recta recta2) {
    int rgm = 0, rgM = 0;
    if ((recta1.getv1()*(-recta2.getv2()) - recta1.getv2()*(-recta2.getv1())) != 0 ||
        (recta1.getv1()*(-recta2.getv3()) - recta1.getv3()*(-recta2.getv1())) != 0 ||
        (recta1.getv2()*(-recta2.getv3()) - recta1.getv3()*(-recta2.getv2())) != 0)
    {
        rgm = 2;
    } else {
        rgm = 1;
    }

    if (((recta1.getv1()*(-recta2.getv2())*(recta2.getp3()-recta1.getp3())) + (recta1.getv3()*(-recta2.getv1())*(recta2.getp2()-recta1.getp2())) + (recta1.getv2()*(-recta2.getv3())*(recta2.getp1()-recta1.getp1()))) -
        ((recta1.getv3()*(-recta2.getv2())*(recta2.getp1()-recta1.getp1())) + (recta1.getv2()*(-recta2.getv1())*(recta2.getp3()-recta1.getp3())) + (recta1.getv1()*(-recta2.getv3())*(recta2.getp2()-recta1.getp2())))!= 0)
    {
        rgM = 3;
    } else if ((recta1.getv1()*(-recta2.getv2()) - (recta1.getv1()*(-recta2.getv2()))) != 0 ||
               (recta1.getv1()*(-recta2.getv2()) - (recta1.getv1()*(-recta2.getv2()))) != 0 ||
               (recta1.getv1()*(-recta2.getv2()) - (recta1.getv1()*(-recta2.getv2()))) != 0 ||
               (recta1.getv1()*(-recta2.getv2()) - (recta1.getv1()*(-recta2.getv2()))) != 0)
    {
        rgm = 2;
    } else {
        rgM = 1;
    }

    posicionRectas(rgm, rgM);
}

//Parte CARLOS VALLE
void Solver::calcularRangoDosPlanos(Plano plano1, Plano plano2) {
    int rgm = 0, rgM = 0;
    if ((plano1.getA()*plano2.getB() - plano2.getA()*plano1.getB()) != 0 ||
        (plano1.getA()*plano2.getC() - plano2.getA()*plano1.getC()) != 0 ||
        (plano1.getB()*plano2.getC() - plano2.getB()*plano1.getC()) != 0)
    {
        rgm = 2;
    } else {
        rgm = 1;
    }

    if ((plano1.getD()*plano2.getB() - plano2.getD()*plano1.getB()) != 0 ||
        (plano1.getA()*plano2.getD() - plano2.getA()*plano1.getD()) != 0 ||
        (plano1.getD()*plano2.getC() - plano2.getD()*plano1.getC()) != 0)
    {
        rgM = 2;
    } else {
        rgM = 1;
    }

    posicionDosPlanos(rgm, rgM);
}

//Parte JULIAN DE PABLO
void Solver::calcularRangoTresPlanos(Plano plano1, Plano plano2, Plano plano3) {
    int rgm = 0, rgM = 0;
    if (((plano1.getA()*plano2.getB()*plano3.getC() + plano1.getB()*plano2.getC()*plano3.getA() + plano1.getC()*plano2.getA()*plano3.getB()) -
         (plano1.getC()*plano2.getB()*plano3.getA() + plano1.getA()*plano2.getC()*plano3.getB() + plano1.getB()*plano2.getA()*plano3.getC())) != 0)
    {
        rgm = 3;
    } else if ((plano1.getA()*plano2.getB() - plano2.getA()*plano1.getB()) != 0 ||
               (plano1.getB()*plano2.getC() - plano2.getB()*plano1.getC()) != 0 ||
               (plano2.getA()*plano3.getB() - plano3.getA()*plano2.getB()) != 0 ||
               (plano2.getB()*plano3.getC() - plano3.getB()*plano2.getC()) != 0)
    {
        rgm = 2;
    } else {
        rgm = 1;
    }

    if (((plano1.getD()*plano2.getB()*plano3.getC() + plano1.getB()*plano2.getC()*plano3.getD() + plano1.getC()*plano2.getD()*plano3.getB()) -
         (plano1.getC()*plano2.getB()*plano3.getD() + plano1.getD()*plano2.getC()*plano3.getB() + plano1.getB()*plano2.getA()*plano3.getC())) != 0 ||
        ((plano1.getA()*plano2.getD()*plano3.getC() + plano1.getD()*plano2.getC()*plano3.getA() + plano1.getC()*plano2.getA()*plano3.getD()) -
         (plano1.getC()*plano2.getD()*plano3.getA() + plano1.getA()*plano2.getC()*plano3.getD() + plano1.getD()*plano2.getA()*plano3.getC())) != 0 ||
        ((plano1.getA()*plano2.getB()*plano3.getD() + plano1.getB()*plano2.getD()*plano3.getA() + plano1.getD()*plano2.getA()*plano3.getB()) -
         (plano1.getD()*plano2.getB()*plano3.getA() + plano1.getA()*plano2.getD()*plano3.getB() + plano1.getB()*plano2.getA()*plano3.getD())) != 0)
    {
        rgM = 3;
    } else if ((plano1.getD()*plano2.getB() - plano2.getD()*plano1.getB()) != 0 ||
               (plano1.getB()*plano2.getC() - plano2.getB()*plano1.getC()) != 0 ||
               (plano2.getD()*plano3.getB() - plano3.getD()*plano2.getB()) != 0 ||
               (plano2.getB()*plano3.getC() - plano3.getB()*plano2.getC()) != 0 ||
               (plano1.getA()*plano2.getD() - plano2.getA()*plano1.getD()) != 0 ||
               (plano1.getD()*plano2.getC() - plano2.getD()*plano1.getC()) != 0 ||
               (plano2.getA()*plano3.getD() - plano3.getA()*plano2.getD()) != 0 ||
               (plano2.getD()*plano3.getC() - plano3.getD()*plano2.getC()) != 0 ||
               (plano1.getA()*plano2.getB() - plano2.getA()*plano1.getB()) != 0 ||
               (plano1.getB()*plano2.getD() - plano2.getB()*plano1.getD()) != 0 ||
               (plano2.getA()*plano3.getB() - plano3.getA()*plano2.getB()) != 0 ||
               (plano2.getB()*plano3.getD() - plano3.getB()*plano2.getD()) != 0)
    {
        rgM = 2;
    } else {
        rgM = 1;
    }

    posicionTresPlanos(rgm, rgM, plano1, plano2, plano3);
}

//Parte JULIAN DE PABLO
void Solver::calcularEcuacionRectaPlano(Recta recta, Plano plano) {
    double P, Q;
    P = plano.getA()*recta.getp1() + plano.getB()*recta.getp2() + plano.getC()*recta.getp3() + plano.getD();
    Q = plano.getA()*recta.getv1() + plano.getB()*recta.getv2() + plano.getC()*recta.getv3();

    posicionRectaPlano(P, Q);
}

//DETERMINAMOS LAS POSICIONES

//Parte ALFONSO VEGA
void Solver::posicionRectas(int rangom, int rangoM) {
    if (rangom == 2 && rangoM == 3) {
        cout << "\nSOLUCION: Las rectas SE CRUZAN\n\n";
    } else if (rangom == 2 && rangoM == 2) {
        cout << "\nSOLUCION: Las rectas SE CORTAN en un punto\n\n";
    } else if (rangom == 1 && rangoM == 2) {
        cout << "\nSOLUCION: Las rectas son PARALELAS\n\n";
    } else {
        cout << "\nSOLUCION: Las rectas son COINCIDENTES\n\n";
    }
}

//Parte CARLOS VALLE
void Solver::posicionDosPlanos(int rangom, int rangoM) {
    if (rangom == 2 && rangoM == 2) {
        cout << "\nSOLUCION: Los planos SE CORTAN en un punto\n\n";
    } else if (rangom == 1 && rangoM == 2) {
        cout << "\nSOLUCION: Los planos son PARALELAS\n\n";
    } else {
        cout << "\nSOLUCION: Los planos son COINCIDENTES\n\n";
    }
}

//Parte JULIAN DE PABLO
void Solver::posicionTresPlanos(int rangom, int rangoM, Plano plano1, Plano plano2, Plano plano3) {
    if (rangom == 3 && rangoM == 3) {
        cout << "\nSOLUCION: Los planos SE CORTAN en un punto\n\n";
    } else if (rangom == 2 && rangoM == 3) {
        if ((plano1.getA() / plano2.getA()) == (plano1.getB() / plano2.getB()) == (plano1.getC() / plano2.getC()) ||
            (plano1.getA() / plano3.getA()) == (plano1.getB() / plano3.getB()) == (plano1.getC() / plano3.getC()) ||
            (plano2.getA() / plano3.getA()) == (plano2.getB() / plano3.getB()) == (plano2.getC() / plano3.getC()))
        {
            cout << "\nSOLUCION: Dos planos PARALELOS CORTAN al tercero\n\n";
        } else {
            cout << "\nSOLUCION: Los planos SE CORTAN dos a dos\n\n";
        }
    } else  if (rangom == 2 && rangoM == 2) {
        if ((plano1.getA() / plano2.getA()) == (plano1.getB() / plano2.getB()) == (plano1.getC() / plano2.getC()) ||
            (plano1.getA() / plano3.getA()) == (plano1.getB() / plano3.getB()) == (plano1.getC() / plano3.getC()) ||
            (plano2.getA() / plano3.getA()) == (plano2.getB() / plano3.getB()) == (plano2.getC() / plano3.getC()))
        {
            cout << "\nSOLUCION: Dos Planos son COINCIDENTES y CORTAN al tercero\n\n";
        } else {
            cout << "\nSOLUCION: Los planos SE CORTAN en una recta\n\n";
        }
    } else if (rangom == 1 && rangoM == 2) {
        if ((plano1.getA() / plano2.getA()) == (plano1.getB() / plano2.getB()) == (plano1.getC() / plano2.getC()) ||
            (plano1.getA() / plano3.getA()) == (plano1.getB() / plano3.getB()) == (plano1.getC() / plano3.getC()) ||
            (plano2.getA() / plano3.getA()) == (plano2.getB() / plano3.getB()) == (plano2.getC() / plano3.getC()))
        {
            cout << "\nSOLUCION: Dos planos son COINCIDENTES y PARALELOS al tercero\n\n";
        } else {
            cout << "\nSOLUCION: Los planos son PARALELOS entre si\n\n";
        }
    } else {
        cout << "\nSOLUCION: Los planos son COINCIDENTES\n\n";
    }
}

//Parte JULIAN DE PABLO
void Solver::posicionRectaPlano(double p, double q) {
    if (q != 0) {
        cout << "\nSOLUCION: La recta y el plano se CORTAN en un punto\n\n";
    } else if (q == 0 && p != 0) {
        cout << "\nSOLUCION: La recta y el plano son PARALELOS\n\n";
    } else {
        cout << "\nSOLUCION: La recta y el plano estan CONTENIDOS\n\n";
    }
}