#include <fstream>

using namespace std;

int main() {
    string nombre;
    float renta;
    float nota;
    ifstream filein("solicitantes.txt");
    ofstream filebin("denegados.bec", ios::out | ios::binary);

    filein >> nombre;
    while(!filein.eof()) {
        filein >> renta >> nota;
        if((renta >= 20000) && (nota <= 5)){
            cout <<"DENEGADO: " << nombre <<" - "<< renta <<" - " << nota << endl;
            filebin.write(reinterpret_cast<const char *>(&nombre), sizeof(string));
            filebin.write(reinterpret_cast<const char *>(&renta), sizeof(float));
            filebin.write(reinterpret_cast<const char *>(&nota), sizeof(float));
        }
        filein >> nombre;
    }
    filein.close();
    filebin.close();
    cout << "**** SELECCION TERMINADA ****"<<endl;
}

//Tamaño de denegados.bec: 6.78 KB