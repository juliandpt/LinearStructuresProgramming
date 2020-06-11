#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Meta el numero de elementos que quiera almacenar: ";
    cin>>n;
    int arr[n],i,j;
    cout<<"Meta los valores del array:\n";

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    //Este flag permite optimizar la solucion inicializandolo a 1
    int flag=1;

    //Ahora comprobaremos el array y si el valor del flag es 1, entonces solo el bucle se ejecutara
    for(i=0;i<n-1 && flag==1;i++){

        //Inicializamos el flag a 0
        flag=0;
        for(j=0;j<n-i-1;j++){

            //Comprobar si el valor es mayor
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                //Si hay un swap se cambia a 1
                flag=1;
            }
        }
    }
    cout<<"Después de ejecutar el algoritmo 'burbuja' el array queda como: \n";
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}