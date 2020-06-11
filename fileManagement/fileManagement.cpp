#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string nombre;  //Declaramos la variable nombre como string
    float renta;  //Declaramos la variable renta como float
    float nota;  //Declaramos la variable nota como float
    ifstream filein("solicitantes.txt");  //Declaramos filein como variable de entrada
    ofstream fileout("aceptados.txt");  //Declaramos fileout como variable de salida
    ofstream filebin("aceptados.bec", ios::out | ios::binary);  //Declaramos filebin como variable binaria

    filein >> nombre;
    while(!filein.eof()) {  //Este bucle se producira mientras no se acabe el archivo
        filein >> renta >> nota;  //Introducimos los valores del archivo en renta y nota
        if((renta <= 22000) && (nota > 6)){  //Este bucle cogera los alumnos que cumplan con las condiciones, y se escribiran en los archivos
            cout <<"ACEPTADO: " << nombre <<" - "<< renta <<" - " << renta << endl;
            fileout << nombre <<" - "<< renta <<" - " << renta << endl;
            filebin.write(reinterpret_cast<const char *>(&nombre), sizeof(string));
            filebin.write(reinterpret_cast<const char *>(&renta), sizeof(float));
            filebin.write(reinterpret_cast<const char *>(&nota), sizeof(float));
        }else {  //los que no cumplan con el bucle anterior, los imprimimos por consola
            cout <<"RECHAZADO: " << nombre <<" - "<< renta <<" - " << renta << endl;
        }
        filein >> nombre;
    }
    //cerramos todos los archivos una vez terminado el bucle
    filein.close();
    fileout.close();
    filebin.close();
    cout << "**** SELECCION TERMINADA ****"<<endl;
}