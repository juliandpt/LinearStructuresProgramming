#include <cstdlib>
#include <iostream>
#include <ctime> // Libreria para capturar la fecha del sistema
#include "Fecha.h"
using namespace std;

int main()
{
    char tecla;
    do{
        system("clear");
        cout<<"_____________________________________________________________________"<<endl;
        cout<<"                                                                    "<<endl;
        cout<<" UNIVERSIDAD EUROPEA - ESCUELA DE ARQUITECTURA, INGENIERIA Y DISEÑO"<<endl;
        cout<<"_____________________________________________________________________"<<endl<<endl;
        cout<<"            << PROGRAMA TIPOS DE DATOS ABSTRACTOS >>"<<endl<<endl<<endl;


        ///Creo el objeto fecha y muestra como se inicializa el constructor con la
        //fecha del sistema segun lo requerido en el enunciado
        Fecha ObjetoFecha1;
        cout<<"Creo el ** ObjetoFecha1 ** y muestro como se inicializa el constructor\n";
        cout<<"con la fecha del sistema segun lo solicita el enunciado \n\n\n" ;
        //fecha del sistema segun lo requerido en el enunciado"
        ObjetoFecha1.imprimir();// Imprimo el objeto con la funcion miembro
        cout << endl;
        int A,MES,ANO,Y,DIA,M,D,numeroDiasSuamdosAfechaDeSistema;//Variables para almacenar la captura x teclado

        // Bloque de captura de fecha introducida por el usuario
        cout <<"\n\n\n BLOQUE DONDE SE PEDIRA UNA FECHA POR TECLADO Y SE USARAN LAS ";
        cout <<"\n FUNCIONES MIEMBRO SOLICITADAS EN EL EL ENUNCIADO PARA MANIPULAR ";
        cout<<"\n OBJETO CREADOS POR EL CONSTRUCTOR";
        cout <<"\n\n\nIntroduzca dia (1-31): ";
        cin >>DIA;
        cout <<"Introduzca mes (1-12): ";
        cin >>MES;
        cout <<"Introduzca año (>1582): ";
        cin >>ANO;
        cout <<"\n\n\n La captura de la fecha la paso a un objeto QUE CREO AHORA  ";
        cout <<"\n siempre y cuando la fecha sea valida y consistente, CASO   ";
        cout<<"\n CONTRARIO SE DEJA solo los campos validos y los invalidos ";
        cout<< "\nse sustituyen por los del sistema EN EL OBJETO\n\n\n";
        cout<<"******** informe de validacion ********************\n\n";

        Fecha ObjetoFecha2;// Creo objeto 2 para probar las funciones miembro
        ObjetoFecha2.comprobarValidezFecha(DIA,MES,ANO);//Valida fecha

        cout <<"\n\n BLOQUE DONDE SE MUESTRA EL DIA DE LA SEMANA EN LETRAS DE LA ";
        cout <<"\n FECHA DADA SEGUN LO SOLICITA EL EL ENUNCIADO * 1-lunes, 7-domingo *\n";

        ObjetoFecha2.diaSemana();//Muestra el dia de la semana en LETRAS;

        cout<<"\n\n_______________________________________________________________________\n";
        cout<<"\nIngrese el numero de dias que desea sumar a la fecha del sistema : ??   ";
        cin>>numeroDiasSuamdosAfechaDeSistema;//capturo cantidad de dias a ser sumados al objeto
        ObjetoFecha1=ObjetoFecha1+numeroDiasSuamdosAfechaDeSistema;// Sumo un entero a un objeto

        cout<<"\n\n*********************************************************************\n";
        cout<<"*********** DESEA INGRESAR UNA NUEVA FECHA S/N :  ?? ***************\n ";
        cout<<"********************************************************************\n";

        cin>>tecla;
    } while (tecla=='s' || tecla=='S');
    cout << endl;
    return 0 ;
} // fin de main