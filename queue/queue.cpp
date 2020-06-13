#include <iostream>
using namespace std;

struct box {
    int i;
    string s;
    float f;
    box *sgt;
};

box *ini,*fin = NULL;
box *aux;

void queue (int a, string b, float c) {
    if (fin == NULL) {
        box *aux = new box;
        aux -> i = a;
        aux -> s = b;
        aux -> f = c;
        aux -> sgt = NULL;
        fin = aux;
        ini = fin;
    } else {
        box *aux= new box;
        fin -> sgt = aux;
        aux -> i = a;
        aux -> s = b;
        aux -> f = c;
        aux -> sgt = NULL;
        fin = aux;
    }
}

void dequeue() {
    if (ini == NULL)
        cout << "La pila esta vacia";
    else if (ini -> sgt == NULL){
        cout<<"Eliminando....";
        ini = ini -> sgt;
        ini = NULL;
        fin = NULL;
    }else {
        cout << "Eliminando";
        ini = ini -> sgt;
    }
}

void print() {
    aux = ini;
    if (ini == NULL) {
        cout << "\nLa pila esta vacia";
    } else {
        while (aux != NULL) {
            cout << aux -> i << " " << aux -> s << " " << aux -> f << " -> ";
            aux = aux -> sgt;
        }
    }
}
int main(){
    int op, x;
    string g;
    float t;
    do {
        cout << "[1] Push\n";
        cout << "[2] Pop\n";
        cout << "[3] Print\n";
        cout << "[4] Salir\n";
        cout << "Elija una opcion: ";
        cin >> op;
        switch (op){
            case 1:
                cout << "\nIngresa el int: ",
                cin >> x,
                cout << "\nIngresa el string: ",
                cin >> g,
                cout << "\nIngresa el float: ",
                cin >> t;
                cout<<"\nInsertando valores....";
                queue(x, g, t);
                cout<<"\nValores insertados con exito";
                break;
            case 2:
                dequeue();
                break;
            case 3:
                cout<<"Imprimiendo.....";
                print();
                break;
            case 4:
                cout<<"Nos vemos!";
        }
    } while(op != 4);
}