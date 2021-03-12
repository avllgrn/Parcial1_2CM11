#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include "Punto.h"
using namespace std;

int main(void){
    srand(time(NULL));

    Punto V, V2;
    int i, n;

    V.modificaTusDatos(rand() % 100, rand() % 100);


    ofstream ArchivoDeSalida("Puntos.txt");
    V.guardaTusDatos(ArchivoDeSalida);
    ArchivoDeSalida.close();


    ifstream ArchivoDeEntrada("Puntos.txt");
    V2.cargaTusDatos(ArchivoDeEntrada);
    ArchivoDeEntrada.close();

    V2.muestraTusDatos();

    return 0;
}
