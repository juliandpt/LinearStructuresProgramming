#include <iostream>
using namespace std;

/* Algoritmo que cuenta la cantidad de targets en el array
int countElements(int arr[], int tar, int count, int index) {
    if(index >= sizeof(arr)) {  //cuando se cumpla este bucle, la variable count no se modificará mas
        return count;
    }

    if(arr[index]==tar){  //si el index = target, se sumana 1 al contador
        count++;
    }

    return countElements(arr, tar, count, index+1);  //aplicamos la recursividad
}

int countElements(int a[],int t){  //función polimorfica creada exclusivamente para darle lógica al ejercicio
    return countElements(a,t,0,0);
}

int main() {
    int array [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};  //Declaramos el array
    int target = 3;  //Declaramos el target
    cout<<"number of targets in the array: "<< countElements(array, target);  //imprimimos el resultado
    return 0;
}
*/

//Algoritmo Binary Search que indica la posición en el array del target
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) { //bucle que se cumple si la parte alta del array es mayor o igual que la baja
        int mid = l + (r - l) / 2;  //Metemos en una variable el valor medio del array
        if (arr[mid] == x){  //bucle que devuelve si el target esta en el medio
            return mid;
        }
        if (arr[mid] > x){  //Si el valor medio es mayor que el target, la parte alta del array pasa a ser mid-1
            return binarySearch(arr, l, mid - 1, x);
        }
        return binarySearch(arr, mid + 1, r, x);  //Si no se cumple ningun bucle anterior
    }
    return -1;
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int n = sizeof(arr) / sizeof(arr[0]);  //variable para representar la parte alta del array
    int x = 19;  //variable target
    int result = binarySearch(arr, 0, n - 1, x);  //guardamos en una variable el resultado de la funcion
    (result == -1) ? printf("Element is not present in array")  //si no encuentra el target
                   : printf("Element is present at index %d", result);  //si lo encuentra, imprime su posicion
    return 0;
}