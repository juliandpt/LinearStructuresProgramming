#include <iostream>
using namespace std;
#include "Solver.h"

Solver solver;

//Alfonso
void menuRectas(){
    int op;
    bool ret = false;
    do {
        cout << "\n---- MENU RECTAS ----" << endl;
        cout << "[ 1 ] Posicion de rectas en el plano\n";
        cout << "[ 2 ] Posicion de rectas en el espacio\n";
        cout << "[ 0 ] Volver atras\n";
        cout << "Que desea hacer?: ";
        cin >> op;
        switch(op){
            case 1:
                solver.pedirRectasEnPlano();
                break;
            case 2:
                solver.pedirRectasEnEspacio();
                break;
            case 0:
                cout << "Volviendo atras....\n\n";
                ret = true;
                break;
            default:
                cout << "Elija bien el numero\n\n";
                break;
        }
    }while(!ret);
}

//Julian
void menuPlanos(){
    int op;
    bool ret = false;
    cout << "\n---- MENU PLANOS ----\n";
    cout << "[ 1 ] Posicion entre dos planos\n";
    cout << "[ 2 ] Posicion entre tres planos\n";
    cout << "[ 0 ] Volver atras\n";
    cout << "Que desea hacer?: ";
    cin >> op;
    do {
        switch(op){
            case 1:
                solver.pedirDosPlanos();
                break;
            case 2:
                solver.pedirTresPlanos();
                break;
            case 0:
                cout<< "Volviendo atras....\n\n";
                ret = true;
                break;
            default:
                cout << "Elija bien el numero\n\n";
                break;
        }
    }while(!ret);
}

//Julian
int main() {
    cout << "-----------------------------------------------------------------\n";
    cout << "                PROYECTO INTEGRADOR PEL + ALGEBRA                \n";
    cout << "Autores: Carlos Valle, Julian de Pablo, Alfonso Vega, David Merle\n";
    cout << "-----------------------------------------------------------------\n\n";
    int op;
    bool exit = false;
    do {
        cout << "---- POSICIONES A ESTUDIAR ----\n";
        cout << "[ 1 ] Recta - recta\n";
        cout << "[ 2 ] Plano - plano\n";
        cout << "[ 3 ] Recta - plano\n";
        cout << "[ 0 ] Salir\n";
        cout << "Que desea hacer?: ";
        cin >> op;
        switch(op){
            case 1:
                menuRectas();
                break;
            case 2:
                menuPlanos();
                break;
            case 3:
                solver.pedirRectaPlano();
                break;
            case 0:
                cout << "\nNos vemos pronto!";
                exit = true;
                break;
            default:
                cout << "Elija bien el numero\n\n";
                break;
        }
    }while(!exit);
}