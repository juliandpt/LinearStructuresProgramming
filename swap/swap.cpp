#include <iostream>
using namespace std;

int swap(int *j, int *k){ //metodo por punteros
    int temp;
    temp = *j;
    *j = *k;
    *k = temp;
}

int swap2(int &j, int &k){
    cout<<"direccion de memoria antes del swap de j: "<< j <<", direccion de memoria antes del swap de k: "<< k << "\n";
    int temp;
    temp = j;
    j = k;
    k = temp;
    cout<<"direccion de memoria despues del swap de j: "<< j <<", direccion de memoria despues del swap de k: "<< k << "\n";
}

int menu(){
    int op;
    cout<<"1. PUNTEROS\n";
}

int main() {
    int op = menu();
    int j = 2, k = 3;
    cout<<"el valor de la direccion de memoria de j es: "<< &j << " y el de k es: "<< &k << "\n";
    swap2(j, k);
    cout<<"nuevo valor de j = "<< j <<" y nuevo valor de k = "<< k;
}