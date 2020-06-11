#include <iostream>
using namespace std;

struct box {
    float valor;
    box *sgt;
    box *ant;
};

box *i,*f = NULL;
box *a, *b;

void printList() {
    a = i;
    if (i == NULL){
        cout << "La lista esta vacia\n";
    }else{
        cout<<"Lista: \n";
        while (a != NULL){
            cout << " - " << a -> valor << " - ";
            a = a -> sgt;
        }
        cout << "\n";
    }
}

void insertBeginning(float x){
    if(i == NULL){
        box *a = new box;
        a -> valor = x;
        a -> sgt = NULL;
        a -> ant = NULL;
        f = a;
        i = f;
        cout<<"Valor insertado con exito \n";
    }else{
        box *a = new box;
        a -> valor = x;
        a -> ant = NULL;
        a -> sgt = i;
        i ->  ant = a;
        i = a;
        cout<<"Valor insertado con exito \n";
    }
}

void insertEnd(float x){
    if(i == NULL){
        box *a = new box;
        a -> valor = x;
        a -> sgt = NULL;
        a -> ant = NULL;
        f = a;
        i = f;
        cout<<"Valor insertado con exito \n";
    }else{
        box *a = new box;
        a -> valor = x;
        a -> ant = f;
        a -> sgt = NULL;
        f -> sgt = a;
        f = a;
        cout<<"Valor insertado con exito \n";
    }
}

void insertPos(int pos, float x){
    if(pos == 0){
        insertBeginning(x);
        cout<<"Valor insertado con exito\n";
    }else{
        box *n = new box;
        n -> valor = x;
        a = i;
        bool outOfRange = (a == NULL);
        int count = 0;
        while(count < pos-1 && !outOfRange){
            if(a -> sgt == NULL){
                outOfRange = true;
            }else{
                a = a -> sgt;
                count++;
            }
        }
        if(outOfRange){
            cout <<"fuera de rango\n";
        }else{
            a-> sgt-> ant = n;
            n-> sgt = a->sgt;
            n-> ant = a;
            a-> sgt = n;
            cout<<"Valor insertado con exito\n";
        }
    }
}

void maxElem() {
    float max = 0;
    int count = 0;
    a = i;
    if (i == NULL){
        cout << "La lista esta vacia, luego no hay un elemento maximo \n";
        cout << "\n";
    }else{
        while (a != NULL){
            if((a -> valor) >  max){
                max = a -> valor;
                count = 1;
            }else if((a -> valor) ==  max){
                count++;
            }
            a = a -> sgt;
        }
        cout << "valor maximo en la lista: " << max <<"\n";
        cout << "numero de veces que se repite: " << count << "\n";
    }
}

void sumElems() {
    float sum = 0;
    a = i;
    if (i == NULL){
        cout << "La lista esta vacia, vuelva al menu e inserte valores \n";
        cout << "\n";
    }else{
        while (a != NULL){
            sum += a -> valor;
            a = a -> sgt;
        }
        cout << "suma total de los valores en la lista: " << sum << "\n";
    }
}

void isOrdered() {
    bool ord = true;
    a = i;
    if (i == NULL){
        cout << "La lista esta vacia, vuelva al menu e inserte valores \n";
        cout << "\n";
    }else{
        while (a != NULL && a -> sgt != NULL) {
            if ((a -> valor) > (a -> sgt -> valor)) {
                ord = false;
            }
            a = a -> sgt;
        }
        if(ord == false){
            cout << "La lista NO esta ordenada";
        }else{
            cout << "La lista esta ordenada";
        }
    }
}

void deleteElem(box *aux){
    if(aux -> ant == NULL){
        if(aux -> sgt == NULL){
            i = NULL;
            f = NULL;
            delete(aux);
        }else{
            i = aux -> sgt;
            aux -> sgt -> ant = NULL;
            delete(aux);
        }
    }else if(aux -> sgt == NULL){
        f = aux -> ant;
        aux -> ant -> sgt = NULL;
        delete(aux);
    }else{
        aux -> ant -> sgt = aux -> sgt;
        aux -> sgt -> ant = aux -> ant;
        delete(aux);
    }

}

void deleteOcurrences() {
    float v;
    a = i;
    b = f;
    if (i == NULL){
        cout << "La lista esta vacia, no se puede eliminar ocurrencias\n";
    }else{
        cout << "Inserte el numero que desea eliminiar: ";
        cin >> v;
        while (a != NULL){
            if(a -> valor == v){
                b = a -> sgt;
                deleteElem(a);
                a = b;
            }else{
                a = a -> sgt;
            }
        }
        cout << "Ocurrencias eliminadas correctamente\n";
    }
}

void swap (box *aux, box *b){
    if (aux != NULL && b != NULL){
        float auxValue = aux -> valor;
        aux -> valor = b -> valor;
        b -> valor = auxValue;
    }
}

void reverse(){
    a = i;
    b = f;
    if (i == NULL){
        cout << "La lista esta vacia";
    }else{
        while (a != b && b -> sgt != a){
            swap(a, b);
            a = a -> sgt;
            b = b -> ant;
        }
        cout << "Nueva lista: \n";
        printList();
        cout << "\n";
    }
}
/*
void swapPos() {  //corregir
    int p1, p2;
    a = i;
    int cont = 0;
    box *mi, *ma;
    if (i == NULL || i -> sgt == NULL){
        cout << "No hay valores suficientes, inserte mas valores\n";
    }else{
        printList();
        cout << "\nInserte la posicion del primer nodo: ";
        cin >> p1;
        cout << "Inserte la posicion del segundo nodo: ";
        cin >> p2;
        int mayor = max(p1, p2);
        int menor = min(p1, p2);
        while (a != NULL){
            if(cont == menor){
                mi = a;
            }
            else if(cont == mayor){
                ma = a;
            }
            a = a -> sgt;
            cont++;
        }
        swap(mi, ma);
        cout << "Nueva lista: \n";
        printList();
    }
}
*/
int main(){
    int op, pos;
    float v;
    bool exit = false;
    do{
        cout << "\n**************** MENU PRINCIPAL ****************\n";
        cout << "[ 1 ] Mostrar la lista \n";
        cout << "[ 2 ] Insertar un elemento al INICIO de la lista \n";
        cout << "[ 3 ] Insertar un elemento al FINAL de la lista \n";
        cout << "[ 4 ] Insertar un elemento en una POSICION elegida por el usuario \n";
        cout << "[ 5 ] Calculo del MAYOR de los elementos y cuantas veces se REPITE \n";
        cout << "[ 6 ] SUMA de todos los datos de la lista \n";
        cout << "[ 7 ] Comprobar si la lista esta ORDENADA \n";
        cout << "[ 8 ] ELIMINAR todas las OCURRENCIAS de un elemento dado de la lista \n";
        cout << "[ 9 ] INVERTIR la lista \n";
        cout << "[ 10 ] INTERCAMBIAR dos nodos DADOS en la lista \n";
        cout << "[ 0 ] SALIR \n";
        cout << "\nElija la opcion que desea hacer: ";
        cin >> op;
        switch (op){
            case 1:
                printList();
                break;
            case 2:
                cout<<"Ingresa el valor a insertar en la lista: ";
                cin >> v;
                insertBeginning(v);
                break;
            case 3:
                cout<<"Ingresa el valor a insertar en la lista: ";
                cin >> v;
                insertEnd(v);
                break;
            case 4:
                printList();
                cout << "\nIngresa la posicion deseada: ";
                cin >> pos;
                cout<<"Ingresa el valor a insertar en la lista: ";
                cin >> v;
                insertPos(pos, v);
                break;
            case 5:
                maxElem();
                break;
            case 6:
                sumElems();
                break;
            case 7:
                isOrdered();
                break;
            case 8:
                deleteOcurrences();
                break;
            case 9:
                reverse();
                break;
            case 10:
                //swapPos();
                break;
            case 0:
                exit = true;
                break;
        }
    }while(op <= 10 && !exit);
}