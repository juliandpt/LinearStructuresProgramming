#include <cstdlib>
#include <iostream>
#include <sstream>     // Utilizado para validar entradas del teclado
#include <ctime>
#include "Fecha.h" // incluye la definición de la clase Fecha 
using namespace std;


// Constructor que inicializa la fecha con la fecha del sistema
Fecha::Fecha()
{
    time_t ahora = time(0);// Asigno a la variable ahora el tiempo 0 que me pasa la funcion time()
    tm *fechaDeSistema = localtime(&ahora);//Asigno al puntero fechaDeSistema el valor de ahora del Struct
    anio=(1900 + fechaDeSistema->tm_year);//Le paso al constructor el ano del sistema
    mes=(1 + fechaDeSistema->tm_mon);//Le paso al constructor el mes del sistema
    dia=(fechaDeSistema->tm_mday);//Le paso al constructor el dia del sistema
}

// imprime objeto Fecha en el formato mes/dia/anio
void Fecha::imprimir() const
{
    cout << dia << '/' << mes << '/' << anio;
} // fin de la función imprimir


// imprime objeto Fecha para mostrar cuándo se llama a su destructor
int Fecha::comprobarDia( int diaPrueba ) const
{
    static const int diasPorMes[ 13 ] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    // determina si diaPrueba es válido para el mes especificado
    if ( diaPrueba > 0 && diaPrueba <= diasPorMes[ mes ] )
        return diaPrueba;
    // comprueba 29 de febrero para año bisiesto
    if ( mes == 2 && diaPrueba == 29 && ( anio % 400 == 0 || ( anio % 4 == 0 && anio % 100 != 0 )))
        return diaPrueba;
    cout << "<<<< DIA invalido >>>> (" << diaPrueba << ")  NO EXISTE en nuestro calendario \n\n";
    cout<<" Para mantener los datos consistentes vamos a dejar en el objeto la fecha del sistema\n\n";
    return dia; // deja el objeto en estado consistente si hay un valor incorrecto
}// fin de la función comprobarDia

//Devuelve dia semana en formato(1-lunes,7-domingo), segun solicitan en enunciado
int Fecha::diaSemana()
{
    // Array para seleccion facil de los dias en letras
    string Days[7]={"DOMINGO","LUNES","MARTES","MIERCOLES","JUEVES",
                    "VIERNES","SABADO"};
    int a,y,m,d; // Variables para las operaciones
    a = (14-mes)/12;   // Algoritmo de Zeller, que determina el dia usando la siguiente formula
    y=anio-a;
    m = mes +12*a-2;
    d = (dia+y+y/4-y/100+y/400+(31*m/12))%7;
    // Imprimo el dia cogiendo del Vecto el dia correspondiente
    cout <<endl <<"\n\nLa fecha : "<< dia <<"/"<< mes <<"/"<<anio <<" Cae en : "<< Days[d]<<endl;
}

//Valida la entrada por teclado de la fecha introducida
int Fecha::comprobarValidezFecha(int dd, int mm, int aa)
{

    if ( mm > 0 && mm <= 12 ) // valida el mes
        mes = mm;
    else
    {
        cout << "<<<< MES invalido >>>>> (" << mm << ") NO EXISTE en nuestro calendario \n";
    } // fin else

    if ( aa >= 1900 ) // valida el mes
        anio = aa; // se pudo validar aa
    else
    {
        cout << "<<<< ANO invalido >>>>> (" << aa << ") NO EXISTE en nuestro calendario \n";
    } // fin else


    dia = comprobarDia( dd ); // valida el dia */


}

//Implementacion de la sobrecarga del operador suma.
Fecha Fecha ::operator +(int diasAsumar)
{
    Fecha diaA;// Objeto Fecha para sumar dias
    //Array para discriminar los dias de 28,30,31
    int dm[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    dia += diasAsumar;
    if(bisiesto(anio)) dm[1] = 29; else dm[1] = 28;
    while(dia > dm[mes-1]) {
        dia -= dm[mes-1];
        mes++;
        if(mes > 12) {
            mes = 1;
            anio++;
            if(bisiesto(anio)) dm[1] = 29; else dm[1] = 28;
        }
    }
    cout<<"------> LA NUEVA FECHA ES :";
    cout<<dia<<"/"<<mes<<"/"<<anio<<endl;

    return diaA ;
}
/*
Fecha Fecha::operator -(Fecha restar)
{
    int difA = anio - restar.
    Fecha diaA;// Objeto Fecha para sumar dias
    //Array para discriminar los dias de 28,30,31
    int dm[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    dia += diasAsumar;
    if(bisiesto(anio)) dm[1] = 29; else dm[1] = 28;
    while(dia > dm[mes-1]) {
        dia -= dm[mes-1];
        mes++;
        if(mes > 12) {
            mes = 1;
            anio++;
            if(bisiesto(anio)) dm[1] = 29; else dm[1] = 28;
        }
    }
    cout<<"------> LA NUEVA FECHA ES :";
    cout<<dia<<"/"<<mes<<"/"<<anio<<endl;

    return diaA ;
}*/
//Calcula si es bisisesto
bool Fecha::bisiesto(int)
{
    return !(anio%4) && ((anio%100) || !(anio%400));
}