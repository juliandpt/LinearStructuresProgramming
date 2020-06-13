#include <iostream>
using namespace std;

struct vox {
    int valor;
    vox *sgt;
};

vox *peek = NULL;

void push(int x) {
    vox *newvox = new vox;
    newvox -> valor = x;
    newvox -> sgt = peek;
};

void pop() {
    if (peek == NULL) {
        cout<<"La Stack esta vacia \n";
    }
    peek = peek -> sgt;
};

void print() {
    vox *aux = peek;

    if (aux == NULL) {
        cout<<"La Stack esta vacia \n";
    } else {
        while (aux != NULL) {
            cout << aux -> valor;
            aux = aux -> sgt;
        }
    }
}

int main() {
    int op, x;
    do {
        cout<<"[1] Push \n";
        cout<<"[2] Pop \n";
        cout<<"[3] Imprimir Stack \n";
        cout<<"[4] Salir \n";
        cout<<"Que desea hacer?: \n";
        cin>>op;
        switch(op){
            case 1:
                cout<<"Ingersa el valor a ingresar en la stack: ";
                cin>>x;
                push(x);
                break;
            case 2:
                cout<<"Valor eliminado";
                pop();
            case 3:
                cout<<"Lista: ";
                print();
        }
    } while(op == 1,2,3,4);
}