#include <iostream>
#include <fstream>
using namespace std;

int main(void){
    ofstream ArchivoDeSalida("prueba.txt");

    ArchivoDeSalida <<123<<endl
                    <<45.67<<endl
                    <<'@'<<endl
                    <<"Ferrocarrilero"<<endl;

    ArchivoDeSalida.close();


    int entero;
    float flotante;
    char caracter;
    string cadena;

    cout<<"Entero: "<<entero<<endl
        <<"Flotante: "<<flotante<<endl
        <<"Caracter: "<<caracter<<endl
        <<"Cadena: "<<cadena<<endl<<endl;

    ifstream ArchivoDeEntrada("prueba.txt");
    ArchivoDeEntrada>>entero
                    >>flotante
                    >>caracter
                    >>cadena;
    ArchivoDeEntrada.close();

    cout<<"Entero: "<<entero<<endl
        <<"Flotante: "<<flotante<<endl
        <<"Caracter: "<<caracter<<endl
        <<"Cadena: "<<cadena<<endl<<endl;

    return 0;
}
